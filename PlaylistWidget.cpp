#include "PlaylistWidget.h"

PlaylistWidget::PlaylistWidget(QString *name, QWidget *parent)
    : QPushButton(parent)
{
    setText(*name);
    content = new Playlist(name);
}

Playlist* PlaylistWidget::getPlaylist()
{
    return content;
}
