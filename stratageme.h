#ifndef STRATAGEME_H
#define STRATAGEME_H

#include <QString>
#include <QList>

//enum Type {PatrioticAdministrationCenter, OrbitalCannons, Hanger, Bridge, EngineeringBay, RoboticsWorkshop, GeneralStratagems};
//enum Input {Up, Down, Left, Right};

class Stratageme
{
private:
    int _id;
    QString _imagePath;
    QString _inputSequence;

public:
    //Constructor, Destructor
    Stratageme();
    Stratageme(int id, QString t, QString i);

    //Getters
    int getId(){return this->_id;}
    QString getImagePath(){return this->_imagePath;}
    QString getInputSequence(){return this->_inputSequence;}

    //Operators
    
    Stratageme& operator=(const Stratageme &s);

    //Methodes
    int GetSequenceLength();
};

#endif // STRATAGEME_H
