#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "playlist.h"
#include "stratageme.h"

class GameManager
{

private:
    Playlist _currentPlaylist ;
    Stratageme _currentStratagem ;
    QList<QString> _currentSequence ;
    int _sequenceProgression ;

public:
    GameManager();
    void UpdatePlaylist(Playlist);

    virtual void endGame();

    int chechInput(QString);    //Va falloir clarifier ce que fait chaque fonction mdr

    void nextStratagem();

};


class TimeGameMode : GameManager
{

    void endGame(){

    };

}

class PrecisionGameMode : GameManager
{
    void endGame(){

    };
};


#endif // GAMEMANAGER_H
