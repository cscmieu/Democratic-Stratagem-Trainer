
/**
 * @file PlaylistWidget.cpp
 * @brief Implementation file for the PlaylistWidget class.
 */

#include "PlaylistWidget.h"

/**
 * @brief Constructs a PlaylistWidget object with the given name and parent.
 * @param name The name of the playlist.
 * @param parent The parent widget.
 */
PlaylistWidget::PlaylistWidget(QString *name, QWidget *parent)
    : QPushButton(parent)
{
    setText(*name);
    content = new Playlist(name);
}

/**
 * @brief Returns the playlist associated with the widget.
 * @return A pointer to the Playlist object.
 */
Playlist* PlaylistWidget::getPlaylist()
{
    return content;
}
