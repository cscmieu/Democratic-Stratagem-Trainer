
/**
 * @file PlaylistWidget.h
 * @brief This file contains the declaration of the PlaylistWidget class.
 */

#ifndef PLAYLISTWIDGET_H
#define PLAYLISTWIDGET_H

#include "./playlist.h"
#include <QPushButton>
#include <QObject>

/**
 * @class PlaylistWidget
 * @brief The PlaylistWidget class represents a custom widget for displaying a playlist.
 *
 * This class inherits from QPushButton and provides additional functionality for managing a playlist.
 */
class PlaylistWidget : public QPushButton
{
    Q_OBJECT
public:
    /**
     * @brief Constructs a PlaylistWidget object with the given name and parent widget.
     * @param name The name of the playlist.
     * @param parent The parent widget.
     */
    explicit PlaylistWidget(QString *name, QWidget *parent = nullptr);

    Playlist* content; /**< The content of the playlist. */

    /**
     * @brief Returns the playlist associated with the widget.
     * @return A pointer to the Playlist object.
     */
    Playlist* getPlaylist();

signals:
};

#endif //PLAYLISTWIDGET_H
