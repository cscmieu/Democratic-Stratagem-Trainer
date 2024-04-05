#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QWidget>
#include <QString>
#include "PlaylistWidget.h"
#include "./playlist.h"

namespace Ui {
class PlaylistItem;
}

class PlaylistItem : public QWidget
{
    Q_OBJECT

public:
    explicit PlaylistItem(PlaylistWidget* _playlistData, QWidget *parent = nullptr);
    ~PlaylistItem();
    PlaylistWidget *playlistData;

    void onDisplayPlaylist();
    void onAddStratagem();

private:
    Ui::PlaylistItem *ui;
};

#endif // PLAYLISTITEM_H
