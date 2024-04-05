#ifndef STRATAGEME_H
#define STRATAGEME_H

#include <QString>
#include <QList>

/**
 * @brief The Stratageme class represents a strategic move or action in a game.
 * 
 * This class provides functionality to store and retrieve information about a stratageme,
 * such as its ID, image path, and input sequence.
 */
class Stratageme
{
private:
    int _id; /**< The ID of the stratageme. */
    QString _imagePath; /**< The path to the image representing the stratageme. */
    QString _inputSequence; /**< The input sequence required to perform the stratageme. */

public:
    /**
     * @brief Default constructor for the Stratageme class.
     */
    Stratageme();

    /**
     * @brief Constructor for the Stratageme class.
     * @param id The ID of the stratageme.
     * @param t The image path of the stratageme.
     * @param i The input sequence required to perform the stratageme.
     */
    Stratageme(int id, QString t, QString i = "0000");

    /**
     * @brief Getter for the ID of the stratageme.
     * @return The ID of the stratageme.
     */
    int getId() { return this->_id; }

    /**
     * @brief Getter for the image path of the stratageme.
     * @return The image path of the stratageme.
     */
    QString getImagePath() { return this->_imagePath; }

    /**
     * @brief Getter for the input sequence required to perform the stratageme.
     * @return The input sequence required to perform the stratageme.
     */
    QString getInputSequence() { return this->_inputSequence; }

    /**
     * @brief Assignment operator for the Stratageme class.
     * @param s The stratageme to assign.
     * @return A reference to the assigned stratageme.
     */
    Stratageme& operator=(const Stratageme& s);

    /**
     * @brief Equality operator for the Stratageme class.
     * @param other The stratageme to compare.
     * @return True if the stratageme IDs are equal, false otherwise.
     */
    bool operator==(const Stratageme& other) const
    {
        return this->_id == other._id;
    }

    /**
     * @brief Get the length of the input sequence required to perform the stratageme.
     * @return The length of the input sequence.
     */
    int GetSequenceLength();
};

#endif // STRATAGEME_H