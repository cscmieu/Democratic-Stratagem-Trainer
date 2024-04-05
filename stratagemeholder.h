/**
 * @file stratagemeholder.h
 * @brief This file contains the declaration of the StratagemeHolder class.
 */
#ifndef STRATAGEMEHOLDER_H
#define STRATAGEMEHOLDER_H

#include "stratageme.h"
#include <QList>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include "SimpleSingleton.h"

/**
 * @class StratagemeHolder
 * @brief The StratagemeHolder class is responsible for holding and managing a collection of Stratageme objects.
 * It implements the singleton design pattern using the SimpleSingleton class.
 */
class StratagemeHolder : public SimpleSingleton<StratagemeHolder>
{
    friend class SimpleSingleton<StratagemeHolder>;
private:

    /**
     * @brief StratagemeHolder
     * Private constructor to prevent direct instantiation.
     */
    StratagemeHolder();

    /**
     * @brief addStratToList
     * Adds a Stratageme object to the list of all stratagems.
     * @param a The QJsonArray containing the data for the stratagem.
     */
    void addStratToList(const QJsonArray& a);

    /**
     * @brief initHolder
     * Initializes the StratagemeHolder by reading stratagem data from a JSON file.
     * @param input The path to the JSON file.
     */
    void initHolder(const QString input);

public:
    QList<Stratageme> _allStratagem;

    /**
     * @brief getStratagemeById
     * Retrieves a Stratageme object from the list of all stratagems by its ID.
     * @param id The ID of the stratagem to retrieve.
     * @return The Stratageme object with the specified ID.
     */
    Stratageme getStratagemeById(int id)
    {
        return _allStratagem[id];
    }
};

#endif // STRATAGEMEHOLDER_H
