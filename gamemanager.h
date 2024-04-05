#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "playlist.h"
#include "stratageme.h"

/**
 * @brief The GameManager class represents the game manager that controls the game flow.
 * 
 * It manages the current playlist, stratagem, sequence progression, and provides methods
 * to update the playlist, check user input, and switch to the next stratagem.
 */
class GameManager
{

private:
    Playlist _currentPlaylist ; /**< The current playlist. */
    Stratageme _currentStratagem ; /**< The current stratagem. */
    QList<QString> _currentSequence ; /**< The current sequence. */
    int _sequenceProgression ; /**< The progression of the sequence. */

public:
    /**
     * @brief Constructs a GameManager object.
     */
    GameManager();

    /**
     * @brief Updates the current playlist.
     * @param playlist The new playlist to update.
     */
    void UpdatePlaylist(Playlist playlist);

    /**
     * @brief Checks the user input.
     * @param input The user input to check.
     * @return The result of the input check.
     */
    int chechInput(QString input);

    /**
     * @brief Switches to the next stratagem.
     */
    void nextStratagem();

};


/**
 * @brief The TimeGameMode class represents a game mode based on time.
 * 
 * It inherits from GameManager and provides an implementation for the endGame() method.
 */
class TimeGameMode : public GameManager
{

    /**
     * @brief Ends the game.
     */
    void endGame(){

    };

};


/**
 * @brief The PrecisionGameMode class represents a game mode based on precision.
 * 
 * It inherits from GameManager and provides an implementation for the endGame() method.
 */
class PrecisionGameMode : public GameManager
{
    /**
     * @brief Ends the game.
     */
    void endGame(){

    };
};


#endif // GAMEMANAGER_H
#