#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QWidget>
#include <QString>
#include "./playlist.h"

namespace Ui {
class PlaylistItem;
}

class PlaylistItem : public QWidget
{
    Q_OBJECT

public:
    explicit PlaylistItem(Playlist*, QWidget *parent = nullptr);
    ~PlaylistItem();

private:
    Ui::PlaylistItem *ui;
};

#endif // PLAYLISTITEM_H
