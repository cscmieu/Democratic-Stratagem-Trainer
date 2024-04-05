#include "stratageme.h"

Stratageme::Stratageme(){}

Stratageme::Stratageme(int id,QString t, QString i) : _id(id), _imagePath(t), _inputSequence(i)
{

}

Stratageme& Stratageme::operator=(const Stratageme &s)
{
    this->_id = s._id;
    this->_imagePath = s._imagePath;
    this->_inputSequence = s._inputSequence;
    return *this;
}

int Stratageme::GetSequenceLength(){
    return this->_inputSequence.length();
}
