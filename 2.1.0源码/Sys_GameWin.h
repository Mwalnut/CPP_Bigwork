#ifndef SYS_GAMEWIN_H
#define SYS_GAMEWIN_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>

class GameWin : public QWidget {
    Q_OBJECT
public:
    explicit GameWin(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    signals:
            void back();
};


#endif // SYS_GAMEWIN_H
