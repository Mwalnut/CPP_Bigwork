#ifndef SYS_PAUSE_H
#define SYS_PAUSE_H

#include <QWidget>
#include <QDialog>

class GamePause : public QDialog {
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *);
    GamePause();
    signals:
};

#endif // SYS_PAUSE_H
