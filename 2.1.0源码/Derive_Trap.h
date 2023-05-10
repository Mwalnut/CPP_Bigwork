#ifndef DERIVE_TRAP_H
#define DERIVE_TRAP_H

#include "Base_Brick.h"
#include "Base_Pipe.h"
#include "Base_Player.h"
#include "Derive_Master.h"

class Fire {
public:

    int x, y, direction;
    int x1, y1, direction1;
    int x2, y2, direction2;
    bool is_have;
    bool is_have1;
    bool is_have2;
    bool is_fire_max;

    Mary *mary;
    Pipe *pipe;
    Brick *brick;
    Master *master;

    //陷阱构造函数
    Fire();

    //陷阱初始化
    void Fire_Init();

    //陷阱的移动
    void Fire_Move(Mary *m, Pipe *p, Brick *r, Master *ms);

    //陷阱坐标
    void Fire_xy();

    //陷阱状态
    void Fire_state();
};


#endif // DERIVE_TRAP_H
