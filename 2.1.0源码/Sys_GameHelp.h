#ifndef SYS_GAMEHELP_H
#define SYS_GAMEHELP_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>

class GameHelp : public QWidget {
    Q_OBJECT
public:
    explicit GameHelp(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    signals:
            void back();
};


#endif // SYS_GAMEHELP_H
