#ifndef STRATAGEMEHOLDER_H
#define STRATAGEMEHOLDER_H

#include "stratageme.h"
#include <algorithm>
#include <QList>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>



class StratagemeHolder
{
private:
    QList<Stratageme> _allStratagem;

    void addStratToList(const QJsonArray& a){
        Stratageme tmpStrat = *new Stratageme(a[0].toInt(), a[1].toString(), a[2].toString(), a[3].toString());
        _allStratagem.append(tmpStrat);
    }

    void initHolder(const QString input){
        //QJsonDocument json;
        //json.fromJson(input);
        //QJsonArray array = json.array();

        QFile file(input);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray jsonData = file.readAll();
        file.close();

        QJsonDocument document = QJsonDocument::fromJson(jsonData);
        QJsonObject object = document.object();

        QJsonValue value = object.value("agentsArray");
        QJsonArray array = value.toArray();

        //while(! array.isEmpty()) {
        //   std::for_each(array.cbegin(), array.cend(), addStratToList);
        //}

        foreach (const QJsonValue & v, array)
        {
            qDebug() << v.toObject().value("ID").toInt();
        }
    }


public:
    StratagemeHolder();
    StratagemeHolder(const QString input);


Stratageme getStratagemeById(int id)
    {
    return _allStratagem[id];
    }
};




#endif // STRATAGEMEHOLDER_H
