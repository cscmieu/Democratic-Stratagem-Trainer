#include "stratagemeholder.h"

StratagemeHolder::StratagemeHolder()
{
    _allStratagem = *new QList<Stratageme>;
}

StratagemeHolder::StratagemeHolder(const QString input)
{
    _allStratagem = *new QList<Stratageme>;
    this->initHolder(input);
}
