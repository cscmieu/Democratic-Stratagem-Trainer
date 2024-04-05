#include "PlaylistItem.h"
#include "ui_PlaylistItem.h"

PlaylistItem::PlaylistItem(Playlist *playlist, QWidget *parent)
    : QWidget(parent), ui(new Ui::PlaylistItem)
{
    ui->setupUi(this);
    ui->Name->setText(playlist->getName());
}

PlaylistItem::~PlaylistItem()
{
    delete ui;
}
