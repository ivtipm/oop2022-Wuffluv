/// @author Рычков Р.В.
/// Заголовочный файл 

#include <iostream>

using namespace std;

/// Класс транспортные средства
class Transport_Vehicle {
protected:
	string oil; /// Топливо транспорта
	string typeOfVehicle; /// Тип транспорта
	string purpose; /// Назначение транспорта
	float weight; /// Масса 
	float MaxSpeed; /// Максимальная скорость
	

public:
	/// Конструктор без параметров
	Transport_Vehicle();

	/// Конструктор с параметрами
	Transport_Vehicle(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Деструктор
	~Transport_Vehicle();

	/// Виртуальный вывод в одну строку
	virtual string toString();

	/// Задать тип транспорта
	void set_typeOfVehicle(string typeOfVehicle1);

	/// Получить тип транспорта
	string get_typeOfVehicle();

	/// Задать назначение транспорта
	void set_purpose(string purpose1);

	/// Получить назначение транспорта
	string get_purpose();

	/// Задать топливо
	void set_oil(string oil1);

	/// Получить топливо
	string get_oil();

	/// Задать массу
	void set_weight(float weight1);

	/// Получить массу
	float get_weight();

	/// Задать скорость
	void set_speed(float MaxSpeed1);

	/// Получить скорость
	float get_speed();
};

/// Класс вертолёт
class Helicopter : public Transport_Vehicle {
private:
	float maxHigh; /// Максимальный уровень полета

public:
	/// Конструктор без параметров 
	Helicopter();

	/// Конструктор с параметрами
	Helicopter(float maxHigh1);

	/// Деструктор 
	~Helicopter();

	/// Задать параметры из основного класса
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Виртуальный вывод в одну строку
	string toString() override;

	/// Задать максимальный уровень полета
	void set_maxHigh(float maxHigh1);

	/// Получить маскимальный уровень полета
	float get_maxHigh();
};

/// Класс автомобиль
class Auto : public Transport_Vehicle {
protected:
	float door; /// Количество дверей

public:
	/// Конструктор без параметров 
	Auto();

	/// Конструктор с параметрами
	Auto(float door1);

	/// Деструктор
	~Auto();

	/// Задать параметры из основного класса
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// Виртуальный вывод в одну строку
	string toString() override;

	/// Задать количество дверей
	void set_door(float door1);

	/// Получить количество дверей
	float get_door();
};