#ifndef PLAYLISTWIDGET_H
#define PLAYLISTWIDGET_H

#include "./playlist.h"
#include <QPushButton>
#include <QObject>

class PlaylistWidget : public QPushButton
{
    Q_OBJECT
public:
    explicit PlaylistWidget(QString *name, QWidget *parent = nullptr);
    Playlist* content;

    Playlist* getPlaylist();

signals:
};

#endif //PLAYLISTWIDGET_H
