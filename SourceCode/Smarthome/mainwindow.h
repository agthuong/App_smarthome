#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCheckBox>
#include <QMainWindow>
#include <QtWidgets>
#include <QAbstractButton>
#include <QFontMetrics>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_toggled(bool checked);
    void on_pushButton_clicked(bool checked);


    void on_dial_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_3_toggled(bool checked);

    void on_pushButton_4_toggled(bool checked);

    void on_dial_3_valueChanged(int value);

    void on_dial_2_valueChanged(int value);





    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_pushButton_5_clicked();




    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
