#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QPainter>
#include<QTimer>
#include"ui_mainwindow.h"
#include"Sys_Button.h"
#include"Sys_GameSence.h"
#include"Sys_GameHelp.h"
#include"Sys_GameWin.h"
#include<QMediaPlaylist>
#include<QMediaPlayer>
#include<QSound>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QMediaPlaylist *musicList;
    QMediaPlayer *musicplay;

    ~MainWindow();

private:
    void paintEvent(QPaintEvent *);

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
