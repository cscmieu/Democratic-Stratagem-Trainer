#include "playlist.h"

Playlist::Playlist() : _name("DefaultPlaylist"), _difficulty(0), _playlistContent(*new QList<Stratageme>())
{

}

Playlist::Playlist(QString *name) : _name(*name), _difficulty(0), _playlistContent(*new QList<Stratageme>())
{
}