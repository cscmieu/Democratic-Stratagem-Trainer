
/**
 * @file stratagemeholder.h
 * @brief This file contains the declaration of the StratagemeHolder class and the SingletonTemplate class.
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

/**
 * @class SingletonTemplate
 * @brief The SingletonTemplate class is a template class that implements the singleton design pattern.
 * @tparam T The type of the singleton instance.
 */
template<typename T>
class SingletonTemplate {
public:
    SingletonTemplate(const SingletonTemplate&) = delete;
    SingletonTemplate& operator=(const SingletonTemplate&) = delete;

    /**
     * @brief getInstance
     * Returns the singleton instance of type T.
     * @return The singleton instance.
     */
    static T& getInstance();

protected:
    SingletonTemplate();
    ~SingletonTemplate();
};

/**
 * @class StratagemeHolder
 * @brief The StratagemeHolder class is responsible for holding and managing a collection of Stratageme objects.
 * It implements the singleton design pattern using the SingletonTemplate class.
 */
class StratagemeHolder : public SingletonTemplate<StratagemeHolder>
{
    friend class SingletonTemplate<StratagemeHolder>;
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
    Stratageme getStratagemeById(int id);
};

#endif // STRATAGEMEHOLDER_H
