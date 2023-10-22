/// @author Rychkov R.V.

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
    bool Ok1;
    bool Ok2;
    bool Ok3;

// Получение значения сторон треугольника из пользовательского ввода
// todo: добавить проверку для остальных
    Q1 = ui->textEdit->toPlainText();
    k1 = Q1.toFloat(&Ok1);
    Q2 = ui->textEdit_2->toPlainText();
    k2 = Q2.toFloat(&Ok2);
    Q3 = ui->textEdit_4->toPlainText();
    k3 = Q3.toFloat(&Ok3);

     // Проверка на наличие всех введенных значений сторон треугольника, если есть ошибки, то выводит на панель сообщение
    if (Ok1 != true){
        ui -> plainTextEdit -> appendPlainText("Пожалуйста, введите значения всех сторон треугольника");
        return;
      }
    if (Ok2 != true){
        ui -> plainTextEdit -> appendPlainText("Пожалуйста, введите значения всех сторон треугольника");
        return;
      }
    if (Ok3 != true){
        ui -> plainTextEdit -> appendPlainText("Пожалуйста, введите значения всех сторон треугольника");
        return;
      }

// Проверяем, что значения не являются отрицательными
       if (k1 <= 0 || k2 <= 0 || k3 <= 0) {
//       //Сообщение об ошибке
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
//   Triangle triangle(k1, k2, k3);

  try{
    triangle.setKatet(k1, k2, k3);
  }
        catch(const invalid_argument& e){
          ui -> plainTextEdit -> appendPlainText("Введите корректные значения сторон треугольника");
        }

// Вычисление площади треугольника
    S = triangle.calculateArea();

// Вычисление высоты треугольника
    H = triangle.calculateHeight();

// Вывод результатов
    ui->plainTextEdit->appendPlainText("Площадь треугольника: " + QString::number(S));
    ui->plainTextEdit->appendPlainText("Высота треугольника: " + QString::number(H));
}

