#ifndef PLAYLISTWIDGET_H
#define PLAYLISTWIDGET_H

#include "./playlist.h"
#include <QPushButton>

class PlaylistWidget : public QPushButton
{
public:
    explicit PlaylistWidget(QString name, QWidget *parent = nullptr);
    Playlist content;

signals:
};

#endif //PLAYLISTWIDGET_H
