/// @author Rychkov R.V.
/// Реализация класса Треугольник

#include <string>
#include <stdexcept>

using namespace std;

/// Класс Треугольник
class Triangle {
private:
	int kat1; /// Катет 1
	int kat2; /// Катет 2
	int kat3; /// Катет 3

public:
	/// Конструткор (Инициализирует поля)
	Triangle();
	Triangle(int k1, int k2, int k3, int h, float S);

	/// Сеттеры
	void setKatet1(const int& k1); /// Задать 1-й катет
	void setKatet2(const int& k2); /// Задать 2-й катет
	void setKatet3(const int& k3); /// Задать 3-й катет

	/// Геттеры
	int getKatet1() const; /// Получить 1-й катет
	int getKatet2() const; /// Получить 2-й катет
	int getKatet3() const; /// Получить 3-й катет

	/// Вывод данных
	string to_string();
};