#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800,545);
    this->setWindowTitle("超级可莉");
    QApplication::setWindowIcon(QIcon(":/photo/icon.png"));//设置图标

    musicList = new QMediaPlaylist;  //添加音乐列表
    musicList->addMedia(QUrl("qrc:/music/mainbgm.mp3"));//添加音乐列表
    musicList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    musicList->setCurrentIndex(1);
    musicplay=new QMediaPlayer;
    musicplay->setPlaylist(musicList);
    musicplay->setVolume(100);
    musicplay->play();
    MyPushButton *start_btn=new MyPushButton(":/photo/start.png");//设置开始按钮
    start_btn->setParent(this);
    start_btn->move(30,this->height()*0.25);
    connect(start_btn, &QPushButton::clicked, [=]()
    {
        start_btn->zoom1();
        start_btn->zoom2();
        //在半秒后执行
        QTimer::singleShot(500,this,[=](){
            musicplay->stop();
            this->hide();
            GameScene *gamescene=new GameScene;
            gamescene->show();
        });
    });
    MyPushButton *help_btn=new MyPushButton(":/photo/help.png");//设置帮助按钮
    help_btn->setParent(this);
    help_btn->move(30,this->height()*0.40);
    connect(help_btn,&QPushButton::clicked,[=]()
    {
        help_btn->zoom1();
        help_btn->zoom2();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            GameHelp *gamehelp=new GameHelp();
            gamehelp->show();
            connect(gamehelp,&GameHelp::back,this,[=]()
            {
                this->show();
            });
        });
    });
    MyPushButton *end_btn=new MyPushButton(":/photo/end.png");//设置结束按钮
    end_btn->setParent(this);
    end_btn->move(30,this->height()*0.55);
    connect(end_btn,&QPushButton::clicked,[=]()
    {
        end_btn->zoom1();
        end_btn->zoom2();
        QTimer::singleShot(500,this,[=]()
        {
            this->close();
        });
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,800,550,QPixmap(":/photo/background1.jpg"));//画背景图
}
