#include "stratagemeholder.h"


StratagemeHolder::StratagemeHolder()
{
    _allStratagem = *new QList<Stratageme>;
    for (int i = 0; i < 30; i++)
    {
        Stratageme strat = Stratageme(i, "./Icons/" + QString::number(i) + ".png");
        _allStratagem.append(strat);
    }
}
