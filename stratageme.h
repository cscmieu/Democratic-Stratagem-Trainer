#ifndef STRATAGEME_H
#define STRATAGEME_H

#include <QString>
#include <QList>

//enum Type {PatrioticAdministrationCenter, OrbitalCannons, Hanger, Bridge, EngineeringBay, RoboticsWorkshop, GeneralStratagems};
//enum Input {Up, Down, Left, Right};

class Stratageme
{
private:
    QString const _stratagemeType;
    int const _id;
    QString const _imagePath;
    QString const _inputSequence;

public:
    //Constructor, Destructor
    Stratageme();
    Stratageme(int id, QString t);

    //Getters
    QString getType(){return this->_stratagemeType;}
    int getId(){return this->_id;}
    QString getImagePath(){return this->_imagePath;}
    QString getInputSequence(){return this->_inputSequence;}


    //Methodes
    int GetSequenceLength();
};


int Stratageme::GetSequenceLength(){
    return this->_inputSequence.length();
}

#endif // STRATAGEME_H
