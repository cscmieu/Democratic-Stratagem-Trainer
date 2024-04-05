/**
 * @file PlaylistItem.h
 * @brief This file contains the declaration of the PlaylistItem class.
 */

#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QWidget>
#include <QString>
#include <QInputDialog>
#include "PlaylistWidget.h"
#include "./playlist.h"

/**
 * @class PlaylistItem
 * @brief The PlaylistItem class represents a single item in a playlist.
 * 
 * This class inherits from QWidget and provides functionality to display and interact with a playlist item.
 */
class PlaylistItem : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructs a PlaylistItem object.
     * @param _playlistData A pointer to the PlaylistWidget object that contains the playlist data.
     * @param parent The parent widget.
     */
    explicit PlaylistItem(PlaylistWidget* _playlistData, QWidget *parent = nullptr);

    /**
     * @brief Destroys the PlaylistItem object.
     */
    ~PlaylistItem();

    PlaylistWidget *playlistData; /**< A pointer to the PlaylistWidget object that contains the playlist data. */

    /**
     * @brief Adds a stratagem to the playlist item.
     */
    void onAddStratagem();

private:
    Ui::PlaylistItem *ui; /**< The user interface for the playlist item. */
};

#endif // PLAYLISTITEM_H
