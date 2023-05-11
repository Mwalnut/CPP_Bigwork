#include"Sys_GameWin.h"
#include"Sys_Button.h"
#include<QTimer>

GameWin::GameWin(QWidget *parent) : QWidget(parent) {
    setWindowTitle("游戏胜利");
    resize(800, 550);
    MyPushButton *back_btn = new MyPushButton(":/photo/end.png");//设置结束按钮
    back_btn->setParent(this);
    back_btn->setFixedSize(180, 80);
    back_btn->setIconSize(QSize(180, 80));
    back_btn->move(500, this->height() * 0.8);
    connect(back_btn, &QPushButton::clicked, [=]()
    {
        back_btn->zoom1();
        back_btn->zoom2();
        this->close();
    });
}

void GameWin::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.drawPixmap(0, 0, 800, 550, QPixmap(":/photo/gamewin.png"));
}
