#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "stratageme.h"
#include "stratagemeholder.h"
#include <QString>
#include <QList>

class Playlist
{
private:
    QString _name;
    int _difficulty;
    QList<Stratageme> _playlistContent;

public:
    //Constructeurs
    Playlist();
    Playlist(QString);


    //Getters & setters
    QString getName(){return this->_name;}
    void setName(QString newName) {this->_name = newName;}

    int getDifficulty(){return this->_difficulty;}
    void setDifficulty(int newDif){this->_difficulty = newDif;}


    void clearPlaylist()
    {
        this->_playlistContent = *new QList<Stratageme>();
    }

    void addStratageme(int stratId)
    {
        Stratageme currStrat = StratagemeHolder::getStratagemeById(stratId);
        this->_playlistContent.append(currStrat);
    }


    //Methodes

    void AddStratagem(int);
    void RemoveStratagem(int);

};








#endif // PLAYLIST_H
