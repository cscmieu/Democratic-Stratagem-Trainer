#ifndef PLAYLISTWIDGET_H
#define PLAYLISTWIDGET_H

#include <QPushButton>

class PlaylistWidget : public QPushButton
{
public:
    explicit PlaylistWidget(QString name, QWidget *parent = nullptr);

signals:
};

#endif //PLAYLISTWIDGET_H
