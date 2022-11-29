/// @author Рычков Р.В.
/// Заголовочный файл 

#include <iostream>

using namespace std;

/// Класс транспортные средства
class Transport_Vehicle {
protected:
	string oil; /// Топливо транспорта
	float weight; /// Масса 
	float speed; /// Скорость

public:
	/// Конструктор без параметров
	Transport_Vehicle();

	/// Конструктор с параметрами
	Transport_Vehicle(string oil1, float weight1, float speed1);

	/// Деструктор
	~Transport_Vehicle();

	/// Виртуальный вывод в одну строку
	virtual string toString();

	/// Задать топливо
	void set_oil(string oil1);

	/// Получить топливо
	string get_oil();

	/// Задать массу
	void set_weight(float weight1);

	/// Получить массу
	float get_weight();

	/// Задать скорость
	void set_speed(float speed1);

	/// Получить скорость
	float get_speed();
};

/// Класс вертолёт
class Helicopter : public Transport_Vehicle {
private:
	string typeOfHelicopter; /// Тип вертолета
	string purposeH; /// Назначение вертолета

public:
	/// Конструктор без параметров 
	Helicopter();

	/// Конструктор с параметрами
	Helicopter(string typeOfHelicopter1, string purposeH1);

	/// Деструктор 
	~Helicopter();

	/// Виртуальный вывод в одну строку
	string toString() override;

	/// Задать тип вертолета
	void set_typeOfHelicopter(string typeOfHelicopter1);

	/// Получить тип вертолета
	string get_typeOfHelicopter();

	/// Задать назначение вертолета
	void set_purposeH(string purposeH1);

	/// Получить назначение вертолета
	string get_purposeH();
};

/// Класс автомобиль
class Auto : public Transport_Vehicle {
protected:
	string typeOfAuto; /// Тип автомобиля
	string purposeA; /// Назначение автомобиля

public:
	/// Конструктор без параметров 
	Auto();

	/// Конструктор с параметрами
	Auto(string typeOfAuto1, string purposeA1);

	/// Деструктор
	~Auto();

	/// Задать параметры из основного класса
	void set_parametr(string oil1, float weight1, float speed1);

	/// Виртуальный вывод в одну строку
	string toString() override;

	/// Задать тип автомобиля
	void set_typeOfAuto(string typeOfAuto1);

	/// Получить тип автомобиля
	string get_typeOfAuto();

	/// Задать назначение автомобиля
	void set_purposeA(string purposeA1);

	/// Получить назначение автомобиля
	string get_purposeA1();
};