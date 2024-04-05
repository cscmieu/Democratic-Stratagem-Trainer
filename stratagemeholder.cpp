#include "stratagemeholder.h"

StratagemeHolder::StratagemeHolder()
{
    _allStratagem = *new QList<Stratageme>;
}

StratagemeHolder::StratagemeHolder(QByteArray input)
{
    _allStratagem = *new QList<Stratageme>;
    this->initHolder(input);
}
