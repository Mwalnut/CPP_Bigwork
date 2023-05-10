#ifndef BASE_BRICK_H
#define BASE_BRICK_H

#include<QMap>
#include<QVector>

class Brick {
public:

    //二维容器
    QVector<int> v;
    QVector <QVector<int>> v2;
    QMap<int, QVector<QVector < int>>> m;

    //砖块破坏效果&状态参量
    int left_shatter_x;
    int left_shatter_y;
    int right_shatter_x;
    int right_shatter_y;
    int shatter_state;

    //砖块构造
    Brick();

    //砖块初始化
    void BrickInit();

    //砖块状态
    void ShatterState();

    //破坏效果
    void BrickShatter(QVector<QVector <int>>::iterator it
    );
};

#endif // BASE_BRICK_H
