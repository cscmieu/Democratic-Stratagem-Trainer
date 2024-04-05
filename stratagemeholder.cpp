#include "stratagemeholder.h"


StratagemeHolder::StratagemeHolder(const QString input)
{
    _allStratagem = *new QList<Stratageme>;
    this->initHolder(input);
}
