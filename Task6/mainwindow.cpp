#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Triangle.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    float k1;
    float k2;
    float k3;
    QString Q1;
    QString Q2;
    QString Q3;
    float S;
    float H;
    bool Ok;

// Получение значения сторон треугольника из пользовательского ввода
    Q1 = ui->textEdit->toPlainText();
    k1 = Q1.toFloat(&Ok);
    Q2 = ui->textEdit_2->toPlainText();
    k2 = Q2.toFloat(&Ok);
    Q3 = ui->textEdit_4->toPlainText();
    k3 = Q3.toFloat(&Ok);

    if (Ok != true){
        ui -> plainTextEdit -> appendPlainText("Пожалуйста, введите значения всех сторон треугольника");
        return;
      }

// Проверяем, что значения не являются отрицательными
        if (k1 <= 0 || k2 <= 0 || k3 <= 0) {
        //Сообщение об ошибке
        ui->plainTextEdit->appendPlainText("Пожалуйста, введите положительные значения для сторон треугольника.");
        return;
       }

//Проверяем, что строки не пусты
        if (Q1.isEmpty() || Q2.isEmpty() || Q3.isEmpty()) {
        // Выведите сообщение об ошибке
         ui->plainTextEdit->appendPlainText("Пожалуйста, введите значения всех сторон треугольника.");
         return;
       }

// Объект класса Triangle   
    Triangle triangle(k1, k2, k3);

// Вычисление площади треугольника
    S = triangle.calculateArea();

// Вычисление высоты треугольника
    H = triangle.calculateHeight();

// Вывод результатов
    ui->plainTextEdit->appendPlainText("Площадь треугольника: " + QString::number(S));
    ui->plainTextEdit->appendPlainText("Высота треугольника: " + QString::number(H));

// Очищение введенных данных
        ui->textEdit->clear();
        ui->textEdit_2->clear();
        ui->textEdit_4->clear();

}

