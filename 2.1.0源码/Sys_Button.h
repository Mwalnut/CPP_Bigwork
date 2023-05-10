#ifndef SYS_BUTTON_H
#define SYS_BUTTON_H

#include<QObject>
#include<QPushButton>
#include<QString>
#include<QPropertyAnimation>

class MyPushButton : public QPushButton {
    Q_OBJECT
public:
    MyPushButton(QString normalImg);

    QString normalImgPath;

    void zoom1();

    void zoom2();

    signals:

};

#endif // SYS_BUTTON_H
