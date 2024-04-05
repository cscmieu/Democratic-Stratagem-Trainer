
/**
 * @file stratagemeholder.cpp
 * @brief Implementation file for the StratagemeHolder class.
 */

#include "stratagemeholder.h"

/**
 * @brief Default constructor for the StratagemeHolder class.
 */
StratagemeHolder::StratagemeHolder()
{
    _allStratagem = *new QList<Stratageme>;
    for (int i = 0; i < 30; i++)
    {
        Stratageme strat = Stratageme(i, "./Icons/" + QString::number(i) + ".png");
        _allStratagem.append(strat);
    }
}
