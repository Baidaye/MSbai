#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);




    //测试项
    button = new QPushButton("Hallo" ,this);
    button->setGeometry(100,100,100,100);
    button->setStyleSheet(" QPushButton{border: 1px solid #C0C0C0; \
                           background-color: white;\
                           border-style: solid;\
                           border-radius:0px;\
                           color:black;\
                           font-family:\"STXihei\";\
                           font-size: 15px;\
                           padding:0 0px;\
                           margin:0 0px;\
                           }\
                           QPushButton:hover{border: 1px solid #C0C0C0; \
                            background-color: #ececec;\
                            border-style: solid;\
                            border-radius:0px;\
                            color:black;\
                            font-family:\"STXihei\";\
                            font-size: 15px;\
                            padding:0 0px;\
                            margin:0 0px;\
                            }\
                           ");
}

Widget::~Widget()
{
    delete ui;
}
