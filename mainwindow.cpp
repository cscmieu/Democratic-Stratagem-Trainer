#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "PlaylistWidget.h"

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

    QString playlistName = QInputDialog::getText(this, tr("Create Playlist"), tr("Enter Playlist Name"));

    PlaylistWidget *testPlaylistWidget = new PlaylistWidget(playlistName);

    layout->insertWidget(0,testPlaylistWidget);

    // QObject::connect(
    //     testPlaylistWidget, QPushButton::clicked,
    //     this, &MainWindow::onRemovePlaylist);
}

// void MainWindow::onRemovePlaylist()
// {
//     PlaylistWidget *playlist = qobject_cast<PlaylistWidget*>(sender());
//     delete playlist;
// }

MainWindow::~MainWindow()
{
    delete ui;
}
