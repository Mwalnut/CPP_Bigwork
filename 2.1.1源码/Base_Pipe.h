#ifndef BASE_PIPE_H
#define BASE_PIPE_H

#include<QMap>
#include<QVector>

class Pipe {
public:
    QVector<int> v;
    QVector <QVector<int>> v2;
    //俩种类型
    QMap<int, QVector<QVector < int>>> short_m;
    QMap<int, QVector<QVector < int>>> long_m;

    void Pipe_Init();

    Pipe();
};

#endif // BASE_PIPE_H
