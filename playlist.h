
/**
 * @file playlist.h
 * @brief This file contains the declaration of the Playlist class.
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "stratageme.h"
#include "stratagemeholder.h"
#include <QString>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui {
class PlaylistItem;
}
QT_END_NAMESPACE

/**
 * @class Playlist
 * @brief Represents a playlist of stratagems.
 *
 * The Playlist class stores a collection of Stratageme objects and provides methods to manipulate the playlist.
 */
class Playlist {
private:
    QString _name; /**< The name of the playlist. */
    int _difficulty; /**< The difficulty level of the playlist. */
    QList<Stratageme> _playlistContent; /**< The list of stratagems in the playlist. */

public:
    /**
     * @brief Default constructor for the Playlist class.
     */
    Playlist();

    /**
     * @brief Constructor for the Playlist class with a specified name.
     * @param name The name of the playlist.
     */
    Playlist(QString* name);

    /**
     * @brief Default destructor for the Playlist class.
     */
    ~Playlist() = default;

    /**
     * @brief Gets the name of the playlist.
     * @return The name of the playlist.
     */
    QString getName(){return this->_name;}

    /**
     * @brief Sets the name of the playlist.
     * @param newName The new name of the playlist.
     */
    void setName(QString newName) {this->_name = newName;}

    /**
     * @brief Gets the difficulty level of the playlist.
     * @return The difficulty level of the playlist.
     */
    int getDifficulty(){return this->_difficulty;}

    /**
     * @brief Sets the difficulty level of the playlist.
     * @param newDif The new difficulty level of the playlist.
     */
    void setDifficulty(int newDif){this->_difficulty = newDif;}

    /**
     * @brief Gets all the stratagems in the playlist.
     * @return A QList containing all the stratagems in the playlist.
     */
    QList<Stratageme> getAllStratagems()
    {
        return _playlistContent;
    }

    /**
     * @brief Clears the playlist, removing all stratagems.
     */
    void clearPlaylist()
    {
        this->_playlistContent = *new QList<Stratageme>();
    }

    /**
     * @brief Adds a stratagem to the playlist.
     * @param stratId The ID of the stratagem to add.
     * @return 1 if the stratagem was added successfully, 0 if the stratagem is already in the playlist.
     */
    int addStratageme(int stratId)
    {
        Stratageme currStrat = StratagemeHolder::getInstance().getStratagemeById(stratId);
        if (_playlistContent.contains(currStrat)) return 0;
        this->_playlistContent.append(currStrat);
        setDifficulty(getDifficulty() + currStrat.getId());
        return 1;
    }

    /**
     * @brief Gets a stratagem from the playlist by index.
     * @param indice The index of the stratagem to retrieve.
     * @return The stratagem at the specified index.
     */
    Stratageme getStratagem(int indice)
    {
        return _playlistContent[indice];
    }

    /**
     * @brief Adds a stratagem to the playlist.
     * @param stratId The ID of the stratagem to add.
     */
    void AddStratagem(int stratId);

    /**
     * @brief Removes a stratagem from the playlist.
     * @param stratId The ID of the stratagem to remove.
     */
    void RemoveStratagem(int stratId);
};
#endif // PLAYLIST_H
