
/**
 * @file stratageme.cpp
 * @brief Implementation file for the Stratageme class.
 */

#include "stratageme.h"

/**
 * @brief Default constructor for the Stratageme class.
 */
Stratageme::Stratageme(){}

/**
 * @brief Parameterized constructor for the Stratageme class.
 * @param id The ID of the stratageme.
 * @param t The image path of the stratageme.
 * @param i The input sequence of the stratageme.
 */
Stratageme::Stratageme(int id, QString t, QString i) : _id(id), _imagePath(t), _inputSequence(i)
{

}

/**
 * @brief Assignment operator overload for the Stratageme class.
 * @param s The stratageme to be assigned.
 * @return A reference to the assigned stratageme.
 */
Stratageme& Stratageme::operator=(const Stratageme &s)
{
    this->_id = s._id;
    this->_imagePath = s._imagePath;
    this->_inputSequence = s._inputSequence;
    return *this;
}

/**
 * @brief Get the length of the input sequence.
 * @return The length of the input sequence.
 */
int Stratageme::GetSequenceLength(){
    return this->_inputSequence.length();
}
