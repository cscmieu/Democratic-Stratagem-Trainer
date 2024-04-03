#include "PlaylistItem.h"
#include "ui_PlaylistItem.h"

PlaylistItem::PlaylistItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlaylistItem)
{
    ui->setupUi(this);
}

PlaylistItem::~PlaylistItem()
{
    delete ui;
}
