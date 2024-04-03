#ifndef STRATAGEMEHOLDER_H
#define STRATAGEMEHOLDER_H

#include "stratageme.h"
#include <algorithm>
#include <QList>
#include <QJsonDocument>
#include <QJsonArray>



class StratagemeHolder
{
private:
    static QList<Stratageme> _allStratagem;

    static void addStratToList(const QJsonArray& a){
        //Stratageme tmpStrat = *new Stratageme(a[0].toString(), a[1].toInt(), a[2].toString(), a[3].toString() );
        //_allStratagem.append(tmpStrat);
    }

    void initHolder(QByteArray input){
        QJsonDocument json;
        json.fromJson(input);
        QJsonArray array = json.array();

        //while(! array.isEmpty()) {
        //    std::for_each(array.cbegin(), array.cend(), addStratToList);
        //}
    }


public:
    StratagemeHolder()
    {
        _allStratagem = *new QList<Stratageme>;
    }


static Stratageme getStratagemeById(int id)
    {
    return _allStratagem[id];
    }
};




#endif // STRATAGEMEHOLDER_H
