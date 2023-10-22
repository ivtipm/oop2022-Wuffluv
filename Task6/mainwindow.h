// @author Rychkov R.V.

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "Triangle.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Конструктор класса MainWindow
    MainWindow(QWidget *parent = nullptr);

    // Деструктор класса MainWindow
    ~MainWindow();



private slots:
    // Слот, вызываемый при нажатии кнопки
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui; // Указатель на интерфейс окна
    Triangle triangle; // Поле класса
};

#endif // MAINWINDOW_H
