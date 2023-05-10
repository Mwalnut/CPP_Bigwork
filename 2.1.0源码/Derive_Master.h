#ifndef DERIVE_MASTER_H
#define DERIVE_MASTER_H

#include<QMap>
#include<QVector>
#include<QString>
#include "Base_Brick.h"
#include "Base_Pipe.h"
#include "Base_Player.h"

class Master {
public:
    QString direction;
    int die_state;//怪物死亡判断

    //和环境的适配
    Mary *mary;
    Pipe *pipe;
    Brick *brick;

    QVector <QVector<int>> v1;
    QMap<int, QVector<QVector < int>>> m;
    QVector<QVector < int>>::iterator itm;

    //怪物构建
    void Master_Init();

    //怪物状态
    void Master_State(Mary *m, Pipe *p, Brick *r);

    //怪物移动
    void Master_Move();

    //构造函数
    Master();
};





#endif // DERIVE_MASTER_H
