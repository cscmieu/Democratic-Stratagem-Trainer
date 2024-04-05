/**
 * @file playlist.cpp
 * @brief Implementation file for the Playlist class.
 */

#include "playlist.h"

/**
 * @brief Default constructor for the Playlist class.
 * Initializes the playlist with default values.
 */
Playlist::Playlist() : _name("DefaultPlaylist"), _difficulty(0), _playlistContent(*new QList<Stratageme>())
{

}

/**
 * @brief Constructor for the Playlist class.
 * Initializes the playlist with the given name and default values for other attributes.
 * 
 * @param name The name of the playlist.
 */
Playlist::Playlist(QString *name) : _name(*name), _difficulty(0), _playlistContent(*new QList<Stratageme>())
{
}