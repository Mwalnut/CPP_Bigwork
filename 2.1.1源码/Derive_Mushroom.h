#ifndef DERIVE_MUSHROOM_H
#define DERIVE_MUSHROOM_H

#include<QSound>
#include<QMediaPlaylist>
#include<QMediaPlayer>
#include<QVector>
#include<QMap>
#include"Base_Brick.h"
#include"Base_Coin.h"
#include"Base_Player.h"

class MushRoom
{
public:

    QMap<int,QVector<QVector<int>>>m;
    int mushroom_kind;//蘑菇种类
    int mushroom_x;
    int mushroom_y;
    int mushroom_state;
    int mushroom_fall_down_distance;
    //和环境交互
    Brick *brick;
    Unknown *unknown;
    Mary *mary;

    MushRoom();
    void MushRoom_Init();
    void Move_state();
    void MushRoom_Move(QVector<QVector<int>>::iterator it,Unknown *u,Brick *r, Mary *m);
};


#endif // DERIVE_MUSHROOM_H
