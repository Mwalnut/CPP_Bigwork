#ifndef SYS_GAMESENCE_H
#define SYS_GAMESENCE_H

#include<QWidget>
#include<QPainter>
#include<QDebug>
#include<QString>
#include<QTimer>
#include<QKeyEvent>
#include<QDialog>
#include<QSound>
#include<QMediaPlaylist>
#include<QMediaPlayer>
#include"Base_Player.h"
#include"Base_Brick.h"
#include"Base_Coin.h"
#include"Derive_Mushroom.h"
#include"Derive_Master.h"
#include"Base_Pipe.h"
#include"Sys_Pause.h"
#include"Sys_Button.h"
#include"Derive_Trap.h"
#include"Base_Terminus.h"
#include"mainwindow.h"

class GameScene : public QWidget {
    Q_OBJECT

public:
    explicit GameScene(QWidget *parent = nullptr);

    int timer1;
    int timer2;
    int timer3;
    bool is_kill_timer2;
    bool game_start;
    float time;
    int score;
    bool is_press_x;
    bool is_win;
    QString key;
    Mary *mary;
    Brick *brick;
    Pipe *pipe;
    Unknown *unknown;
    MushRoom *mushroom;
    GamePause *Pause;
    Master *master;
    Fire *fire;
    Castle *castle;
    QMediaPlaylist *gsmusicList;
    QMediaPlayer *gsmusicplay;

    void paintEvent(QPaintEvent *);//绘图事件
    void keyPressEvent(QKeyEvent *event);//键盘按下
    void keyReleaseEvent(QKeyEvent *event);//键盘抬起
    void timerEvent(QTimerEvent *event);//定时器
    void Game_Init();
    void Die_Init();
    void Pause_Init();
    void Pause_Game_Init();
    void Fall_Down(int &y);
    void Jump_Collision();//角色跳跃碰撞检测
    void Move_Collision();//移动碰撞检测
    void Game_Win();

    signals:
private:

};

#endif // SYS_GAMESENCE_H
