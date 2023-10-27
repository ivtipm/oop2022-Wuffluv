/// @author Rychkov R.V.
/// Реализация класса "Треугольник"

#include "Triangle.h"

using namespace std;

Triangle::Triangle() {
	kat1 = 0; /// Катет 1
	kat2 = 0; /// Катет 2
	kat3 = 0; /// Катет 3
}

/// Задать 1-й катет
void Triangle::setKatet1(const int& k1) {
	if (k1 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat1 = k1;
}

/// Получить 1-й катет
int Triangle::getKatet1() const {
	return kat1;
}

/// Задать 2-й катет
void Triangle::setKatet2(const int& k2) {
	if (k2 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat2 = k2;
}

/// Получить 2-й катет
int Triangle::getKatet2() const {
	return kat2;
}

/// Задать 3-й катет
void Triangle::setKatet3(const int& k3) {
	if (k3 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat3 = k3;
}

/// Получить 3-й катет
int Triangle::getKatet3() const {
	return kat3;
}

/// Получение всех данных из класса
string Triangle::to_string() {
	return "Katet 1: " + std::to_string(kat1) +
		"\nKatet 2: " + std::to_string(kat2) +
		"\nKatet 3: " + std::to_string(kat3);
		
}