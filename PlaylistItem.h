#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QWidget>

class PlaylistItem : public QWidget
{
    Q_OBJECT
public:
    explicit PlaylistItem(QString *name, QWidget *parent = nullptr);

signals:
};

#endif // PLAYLISTITEM_H
