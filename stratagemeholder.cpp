#include "stratagemeholder.h"


StratagemeHolder::StratagemeHolder()
{
    const QString input = "./data.json";
    _allStratagem = *new QList<Stratageme>;
    this->initHolder(input);
}
