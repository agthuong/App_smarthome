#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>
#include <QAbstractButton>
#include "QAbstractSlider"
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //change path
    QPixmap pix ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/air.png");
    ui -> label_26 -> setPixmap(pix.scaled(40,40,Qt::KeepAspectRatio));
    //change path
    ui->pushButton->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/back.png"));
    ui->pushButton->setCheckable(true);
    //tab1
    //change path
    QPixmap pix1 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/temp.png");
    ui -> label_27 -> setPixmap(pix1.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap pix2 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/humi.png");
    ui -> label_28 -> setPixmap(pix2.scaled(30,30,Qt::KeepAspectRatio));
    //change path
    ui->pushButton_2->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
    ui->pushButton_2->setCheckable(true);
    //tab2
    //change path
    QPixmap pix3 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/temp.png");
    ui -> label_31 -> setPixmap(pix3.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap pix4 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/humi.png");
    ui -> label_29 -> setPixmap(pix4.scaled(30,30,Qt::KeepAspectRatio));
    //change path
        ui->pushButton_3->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
        ui->pushButton_3->setCheckable(true);
    //tab3
    //change path
    QPixmap pix5 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/temp.png");
    ui -> label_32 -> setPixmap(pix5.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap pix6 ("C:/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/humi.png");
    ui -> label_30 -> setPixmap(pix6.scaled(30,30,Qt::KeepAspectRatio));
    //change path
        ui->pushButton_4->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
        ui->pushButton_4->setCheckable(true);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_5_clicked()
{
        //change path
        QFile file("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\tkitchen.txt");
        if (!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"fifo",file.errorString());
        QTextStream in1(&file);
        while (!in1.atEnd())
        {
        ui -> label_18 -> setStyleSheet("font-size:26pt; font-weight:700");
        ui -> label_18 -> setText(in1.readAll());
        file.close();
        }
        //change path
        QFile file1("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\hkitchen.txt");
        if (!file1.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"fifo",file1.errorString());
        QTextStream humi1(&file1);
        while (!humi1.atEnd())
        {
        ui -> label_25 -> setStyleSheet("font-size:26pt; font-weight:700");
        ui -> label_25 -> setText(humi1.readAll());
        file.close();
        }
}

void MainWindow::on_pushButton_6_clicked()
{
    //change path
    QFile file2("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\tbedroom.txt");
    if (!file2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"fifo",file2.errorString());
    QTextStream in2(&file2);
    while (!in2.atEnd())
    {
    ui -> label_10 -> setStyleSheet("font-size:26pt; font-weight:700");
    ui -> label_10 -> setText(in2.readAll());
    file2.close();
    }
    //change path
    QFile file3("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\hbedroom.txt");
    if (!file3.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"fifo",file3.errorString());
    QTextStream humi2(&file3);
    while (!humi2.atEnd())
    {
    ui -> label_17 -> setStyleSheet("font-size:26pt; font-weight:700");
    ui -> label_17 -> setText(humi2.readAll());
    file3.close();
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    //change path
    QFile file4("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\tliving.txt");
    if (!file4.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"fifo",file4.errorString());
    QTextStream in(&file4);
    while (!in.atEnd())
    {
    ui -> label_6 -> setStyleSheet("font-size:26pt; font-weight:700");
    ui -> label_6 -> setText(in.readAll());
    file4.close();
    }
    //change path
    QFile file5("C:\\Users\\thuon\\OneDrive\\Desktop\\C++\\Smarthome\\Txtfile\\hliving.txt");
    if (!file5.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"fifo",file5.errorString());
    QTextStream humi(&file5);
    while (!humi.atEnd())
    {
    ui -> label_8 -> setStyleSheet("font-size:26pt; font-weight:700");
    ui -> label_8 -> setText(humi.readAll());
    file5.close();
    }
}
void MainWindow::on_pushButton_3_toggled(bool checked)
{
    if(checked)
    {
        //change path
        ui->pushButton_3->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
        qDebug() << "Tat dieu hoa Bed Room";

    }
    else
    {
        //change path
        ui->pushButton_3->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/off.png"));
        qDebug() << "Tat dieu hoa Bed Room";

    }
}
void MainWindow::on_pushButton_2_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_2->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
        qDebug() << "Bat dieu hoa Living Room";

    }
    else
    {
        ui->pushButton_2->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/off.png"));
        qDebug() << "Tat dieu hoa Living Room";

    }
}
void MainWindow::on_pushButton_4_toggled(bool checked)
{
    if(checked)
    {
        //change path
        ui->pushButton_4->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/on.png"));
        qDebug() << "Bat dieu hoa Kitchen";
    }
    else
    {
        //change path
        ui->pushButton_4->setIcon(QIcon("/Users/thuon/OneDrive/Desktop/C++/Smarthome/image/off.png"));
        qDebug() << "Tat dieu hoa Kitchen";
    }
}
void MainWindow::on_pushButton_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << "Tro ve trang chu";

    }
}
void MainWindow::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
    qDebug() << " Nhiet do Living Room " << " = " << value;
}

void MainWindow::on_dial_3_valueChanged(int value)
{
    ui->lcdNumber_2->display(value);
    qDebug() << " Nhiet do Bed Room " << " = " << value;
}
void MainWindow::on_dial_2_valueChanged(int value)
{
    ui->lcdNumber_3->display(value);
    qDebug() << " Nhiet do Kitchen " << " = " << value;
}
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    qDebug() << " Toc Do LivingRoom " << " = " << value;
}
void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    qDebug() << " Toc Do Bedroom " << " = " << value;
}
void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    qDebug() << " Toc Do Kitchen " << " = " << value;
}




