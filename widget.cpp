#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->btn_up->setEnabled(false);
    ui->btn_down->setEnabled(false);
    ui->btn_left->setEnabled(false);
    ui->btn_right->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    if("start"==ui->pushButton->text())
    {
    ui->btn_up->setEnabled(true);
    ui->btn_down->setEnabled(true);
    ui->btn_left->setEnabled(true);
    ui->btn_right->setEnabled(true);
    ui->pushButton->setText("stop");
    }
    else
    {
        ui->btn_up->setEnabled(false);
        ui->btn_down->setEnabled(false);
        ui->btn_left->setEnabled(false);
        ui->btn_right->setEnabled(false);
        ui->pushButton->setText("start");
    }
}


