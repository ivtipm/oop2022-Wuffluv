/// @author Рычков Р.В.
/// Заголовочный файл класса Transport Vehicle
#include <iostream>

using namespace std;

/// Класс транспортное средство
class Transport_Vehicle {
protected:
	string oil; /// Топливо
	string typeOfVehicle; /// Тип транспорта
	string purpose; /// Назначение транспорта
	float weight; /// Вес
	float MaxSpeed; /// Максимальная скорость
	/// Protected поля доступны методам класса и производным классам

public:
	/// Конструктор без параметров
	Transport_Vehicle();

	/// Конструктор с параметрами
	Transport_Vehicle(string &oil1, string &typeOfVehicle1, string &purpose1, float weight1, float MaxSpeed1);

	/// Деструктор
	~Transport_Vehicle();

	/// Установить параметры из основного класса
	void set_parametr(string &oil1, string &typeOfVehicle1, string &purpose1, float weight1, float MaxSpeed1);

	/// Виртуальный вывод в одну строку
	virtual string toString() const; /// const - не изменяет метод полей класса

	/// Установить тип транспорта
	void set_typeOfVehicle(const string &typeOfVehicle1);

	/// Получить тип транспорта
	string get_typeOfVehicle() const;

	/// Установить назначение транспорта
	void set_purpose(const string &purpose1);///todo: Добавить амперсанты. Добавить ссылку на константы. 

	/// const string& - ссылка на константу

	/// Получить назначение транспорта
	string get_purpose() const;

	/// Установить тип топлива
	void set_oil(const string &oil1);

	/// Получить тип топлива
	string get_oil() const;

	/// Установить вес
	void set_weight(float weight1);

	/// Получить вес
	float get_weight() const;

	/// Установить скорость
	void set_speed(float MaxSpeed1);

	/// Получить скорость
	float get_speed() const;
};

/// Класс вертолета
class Helicopter : public Transport_Vehicle {
private:
	float maxHigh; /// Максимальный уровень подъема

public:
	/// Конструктор без параметров
	Helicopter();

	/// Конструктор с параметрами
	Helicopter(float maxHigh1);

	/// Деструктор
	~Helicopter();

	/// Виртуальный вывод в одну строку
	string toString() const override; /// override - переопределение метода

	/// Установить максимальный уровень подъема
	void set_maxHigh(float maxHigh1);

	/// Вернуть максимальный уровень подъема
	float get_maxHigh() const;
};

/// Класс авто
class Auto : public Transport_Vehicle {
protected:
	int door; /// Количество дверей

public:
	/// Конструктор без параметров
	Auto();

	/// Конструктор с параметрами
	Auto(int door1);

	/// Деструктор
	~Auto();

	/// Виртуальный вывод в одну строку
	string toString() const override;

	/// Установить количество дверей
	void set_door(int door1);

	/// Получить количество дверей
	int get_door() const;
};