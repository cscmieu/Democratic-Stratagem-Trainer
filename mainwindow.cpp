#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "PlaylistWidget.h"
#include <QPixmap>
#include "PlaylistItem.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    QObject::connect(
        ui->createPlaylistButton, &QPushButton::clicked,
        this, &MainWindow::onAddPlaylist);
}

void MainWindow::onAddPlaylist()
{
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(ui->playlistsLayout);

    bool ok = false;

    QString playlistName = QInputDialog::getText(this, tr("Create Playlist"), tr("Enter Playlist Name"), QLineEdit::Normal , QString() ,&ok);

    if(ok)
    {
        PlaylistWidget *testPlaylistWidget = new PlaylistWidget(&playlistName);
        layout->insertWidget(0,testPlaylistWidget);

        QObject::connect(
            testPlaylistWidget, QPushButton::clicked,
            this, &MainWindow::onClickPlaylist);
    }
    QPixmap pic("./Icons/0");
    //ui->label->setPixmap(pic);

}

void MainWindow::onClickPlaylist()
{
    QHBoxLayout *layout = qobject_cast<QHBoxLayout*>(ui->centralwidget->layout());
    PlaylistWidget *playlist = qobject_cast<PlaylistWidget*>(sender());
    PlaylistItem *playlistItem = new PlaylistItem(playlist);
    if (layout->count() > 3) {
        delete layout->itemAt(2)->widget();
    }
    playlistItem->setStyleSheet("border: 1px solid black");
    layout->insertWidget(2, playlistItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}
