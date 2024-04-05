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
    Playlist(QString name);
    ~Playlist() = default;


    //Getters & setters
    QString getName(){return this->_name;}
    void setName(QString newName) {this->_name = newName;}

    int getDifficulty(){return this->_difficulty;}
    void setDifficulty(int newDif){this->_difficulty = newDif;}


    QList<Stratageme> getAllStratagems()
    {
        return _playlistContent;
    }


    void clearPlaylist()
    {
        this->_playlistContent = *new QList<Stratageme>();
    }

    void addStratageme(int stratId)
    {
        Stratageme currStrat = StratagemeHolder::getInstance().getStratagemeById(stratId);
        this->_playlistContent.append(currStrat);
    }

    Stratageme getStratagem(int indice)
    {
        return _playlistContent[indice];
    }


    // Ne marche pas
    Playlist importPlaylist(QString path)
    {
        QString val;
        QFile file;
        file.setFileName(path);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        val = file.readAll();
        file.close();

        QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
        QJsonObject sett2 = d.object();


        Playlist newPlaylist = Playlist("new playlist");

        for (auto v: item){
            //
        }

    }


    // Marche peut-être
    void exportPlaylist()
    {
        QJsonObject tmpStratId;
        for(auto v: this->_playlistContent){
            tmpStratId.insert(QString::number(v.getId()),QJsonValue::fromVariant(v.getId()));
        }
        QJsonDocument doc(tmpStratId);
        QFile file("playlist.json");

        file.open(QIODevice::ReadWrite|QIODevice::Text);
        file.write(doc.toJson());
        file.close();
    }

    //Methodes
    void AddStratagem(int);
    void RemoveStratagem(int);

};




#endif // PLAYLIST_H
