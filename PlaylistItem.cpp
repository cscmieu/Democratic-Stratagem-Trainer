#include "PlaylistItem.h"
#include "ui_PlaylistItem.h"

PlaylistItem::PlaylistItem(PlaylistWidget* _playlistData, QWidget *parent)
    : QWidget(parent), ui(new Ui::PlaylistItem), playlistData(_playlistData)
{
    ui->setupUi(this);
    Playlist *playlist = playlistData->getPlaylist();
    ui->Name->setText(playlist->getName());
    QString difficulty_string = QString::number(playlist->getDifficulty());
    ui->Difficulty->setText(difficulty_string);

    QObject::connect(
        ui->Ok, &QPushButton::clicked,
        this, &PlaylistItem::onDisplayPlaylist);
    
    QObject::connect(
        ui->AddStratagemButton, &QPushButton::clicked,
        this, &PlaylistItem::onAddStratagem);
}

PlaylistItem::~PlaylistItem()
{
    delete ui;
}

void PlaylistItem::onAddStratagem()
{
    // Stratageme *stratageme = new Stratageme();
    // playlistData->getPlaylist()->addStratageme(stratageme);
}

void PlaylistItem::onDisplayPlaylist()
{
    
}
