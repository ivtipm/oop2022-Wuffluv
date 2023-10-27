/// @author Rychkov R.V.

#pragma once
#include <string>
#include <stdexcept>

using namespace std;

/// Класс Треугольник
class Triangle {
private:
	float kat1; /// Катет 1
	float kat2; /// Катет 2
	float kat3; /// Катет 3

public:
	/// Конструктор (Инициализирует поля)
	Triangle();
	Triangle(float k1, float k2, float k3);

	/// Сеттер
	void setKatet(float k1, float k2, float k3); /// Задать 1-й катет


	/// Геттеры
	int getKatet1() const; /// Получить 1-й катет
	int getKatet2() const; /// Получить 2-й катет
	int getKatet3() const; /// Получить 3-й катет

	// Методы для вычисления площади и высоты
	float calculateArea();
	//Получения высоты, опущенную на 1-й катет
	float calculateHeight();

	/// Вывод данных
	string to_string();
};

