#include "stratageme.h"

Stratageme::Stratageme(){}

Stratageme::Stratageme(int id, QString t) : _id(id), _stratagemeType(t)
{

}

Stratageme& Stratageme::operator=(const Stratageme &s)
{
    this->_id = s._id;
    this->_stratagemeType = s._stratagemeType;
    this->_imagePath = s._imagePath;
    this->_inputSequence = s._inputSequence;
    return *this;
}

int Stratageme::GetSequenceLength(){
    return this->_inputSequence.length();
}
