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



template<typename T>
class SingletonTemplate {
public:
    SingletonTemplate(const SingletonTemplate&) = delete;
    SingletonTemplate& operator=(const SingletonTemplate&) = delete;
    static T& getInstance() {
        static T instance; // Guaranteed to be destroyed and instantiated on first use
        return instance;
    }

protected:
    SingletonTemplate() {}

    ~SingletonTemplate() {}
};



class StratagemeHolder : public SingletonTemplate<StratagemeHolder>
{
    friend class SingletonTemplate<StratagemeHolder>;
private:

    StratagemeHolder();
    void addStratToList(const QJsonArray& a){
        Stratageme tmpStrat = *new Stratageme(a[0].toInt(), a[1].toString(), a[2].toString());
        _allStratagem.append(tmpStrat);
    }

    void initHolder(const QString input){

        QFile file(input);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray jsonData = file.readAll();
        file.close();

        QJsonDocument document = QJsonDocument::fromJson(jsonData);
        QJsonObject object = document.object();

        QJsonValue value = object.value("agentsArray");
        QJsonArray array = value.toArray();



        foreach (const QJsonValue & v, array)
        {

            //this->_allStratagem.append(v);
        }
    }


public:
    QList<Stratageme> _allStratagem;





    Stratageme getStratagemeById(int id)
    {
        return _allStratagem[id];
    }
};




#endif // STRATAGEMEHOLDER_H
