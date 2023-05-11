#ifndef BASE_TERMINUS_H
#define BASE_TERMINUS_H

#include<QMap>
#include<QVector>

class Castle {
public:

    QMap<int, QVector<QVector < int>>> m;

    //终点初始化
    void Castle_Init();

    QVector<int> v;
    QVector <QVector<int>> v1;

    //终点构造
    Castle();
};

#endif // BASE_TERMINUS_H
