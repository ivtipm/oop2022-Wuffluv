/// @author Rychkov R.V.
/// Реализация класса "Треугольник"

#include "Triangle.h"
#include "cmath"

using namespace std;

// Конструктор по умолчанию
Triangle::Triangle()
{
	kat1 = 0.0;
	kat2 = 0.0;
	kat3 = 0.0;
}

// Конструктор с параметрами
Triangle::Triangle(float k1, float k2, float k3)
{
  setKatet(k1, k2, k3);
}

// Сеттеры
// todo: comment for check
void Triangle::setKatet(float k1, float k2, float k3)
{
  //Проверка на наличие ошибки, если есть, то выводит сообщение на панель об ошибке
  if (k1 <= 0 || k2 <= 0 || k3 <= 0 || k1 + k2 <= k3 || k1 + k3 <= k2 || k2 + k3 <= k1) {
          throw invalid_argument("Invalid triangle sides");
      }
        kat1 = k1;
        kat2 = k2;
        kat3 = k3;
}


// Геттеры
int Triangle::getKatet1() const
{
	return kat1;
}

int Triangle::getKatet2() const
{
	return kat2;
}

int Triangle::getKatet3() const
{
	return kat3;
}

float Triangle::calculateArea() {
	// Используем формулу Герона
	float p = static_cast<float>(kat1 + kat2 + kat3) / 2.0;
	return sqrt(p * (p - kat1) * (p - kat2) * (p - kat3));
}

//Получения высоты, опущенную на 1-й катет
float Triangle::calculateHeight() {
	// Используем формулу Герона
	float p = (kat1 + kat2 + kat3) / 2;
	float area = sqrt(p * (p - kat1) * (p - kat2) * (p - kat3));
	return 2 * area / kat1;
}


