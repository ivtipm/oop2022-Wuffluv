/// @author Рычков Р.В.
/// Класс транспортное средство

#include <iostream>
#include <exception>
#include <string>
#include "vehicle.h"

using namespace std;

/// Установить параметры из основного класса
void Transport_Vehicle::set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1) {
	set_oil(oil1);
	set_typeOfVehicle(typeOfVehicle1);
	set_purpose(purpose1);
	set_weight(weight1);
	set_speed(MaxSpeed1);
	//if (oil1 == "") throw invalid_argument("Error: field is empty");
	//if (typeOfVehicle == "") throw invalid_argument("Error: field is empty");
	//if (purpose1 == "") throw invalid_argument("Error: field is empty");
	//if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	//if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	/// oil = oil1;
	/// typeOfVehicle = typeOfVehicle1;
	/// purpose = purpose1;
	/// weight = weight1;
	/// MaxSpeed = MaxSpeed1;
}

/// Конструктор без параметров
Transport_Vehicle::Transport_Vehicle() {
	oil = "Petrol"; /// Тип топлива
	typeOfVehicle = "Civil"; /// Тип транспортного средства
	purpose = "Movement"; /// Назначение транспорта
	weight = 120.0; /// Вес
	MaxSpeed = 200.0; /// Максимальная скорость
}

/// Конструктор с параметрами
Transport_Vehicle::Transport_Vehicle(string &oil1, string &typeOfVehicle1, string &purpose1, float weight1, float speed1) {
	set_parametr(oil1, typeOfVehicle1, purpose1 , weight1,speed1); /// 
	///set_oil(oil1);
	///set_typeOfVehicle(typeOfVehicle1);
	///set_purpose(purpose1);
	///set_weight(weight1);
	///set_speed(speed1);
	// todo: 
	//if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	//if (purpose1 == "") throw invalid_argument("Error: field is empty");
	//if (weight1 < 0) throw invalid_argument("Error: field size < 0");
	//if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	///typeOfVehicle = typeOfVehicle1;
	///purpose = purpose1;
	///weight = weight1;
	///MaxSpeed = speed1;
}

/// Деструктор
Transport_Vehicle::~Transport_Vehicle() {}

/// Виртуальный вывод в одну строку
string Transport_Vehicle::toString() const {
	return "Oil - " + oil + "; " + "Type of vehicle - " + typeOfVehicle + "; " + "Purpose - " + purpose + "; " + "Weight - " + std::to_string(weight) + "; " + "Speed - " + std::to_string(MaxSpeed) + "; ";
}

/// Установить тип топлива
void Transport_Vehicle::set_oil(string &oil1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	oil = oil1;
}

/// Получить тип топлива
string Transport_Vehicle::get_oil() const {
	return oil;
}

/// Установить тип транспорта
void Transport_Vehicle::set_typeOfVehicle(string typeOfVehicle1) {
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	typeOfVehicle = typeOfVehicle1;
}

/// Получить тип транспорта
string Transport_Vehicle::get_typeOfVehicle() const {
	return typeOfVehicle;
}

/// Установить назначение транспорта
void Transport_Vehicle::set_purpose(string purpose1) {
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	purpose = purpose1;
}

/// Вернуть назначение транспорта
string Transport_Vehicle::get_purpose() const {
	return purpose;
}

/// Установить вес
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// Получить вес
float Transport_Vehicle::get_weight() const {
	return weight;
}

/// Установить скорость
void Transport_Vehicle::set_speed(float MaxSpeed1) {
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	MaxSpeed = MaxSpeed1;
}

/// Получить скорость
float Transport_Vehicle::get_speed() const {
	return MaxSpeed;
}


/// Класс вертолет
/// Конструктор без параметров
Helicopter::Helicopter() {
	///
	maxHigh = 6000; /// Максимальный уровень подъема
}

/// Конструктор с параметрами
Helicopter::Helicopter(float maxHigh1) {
	set_maxHigh(maxHigh1);
	//if (maxHigh1 < 0) throw invalid_argument("Error: field is < 0");
	maxHigh = maxHigh1;
}

/// Деструктор
Helicopter::~Helicopter() {};


/// Виртуальный вывод в одну строку
string Helicopter::toString() const {

	return Transport_Vehicle::toString() + "; Maximum lifting level " + std::to_string(maxHigh);
}

/// Установить максимальный уровень подъема
void Helicopter::set_maxHigh(const float maxHigh1) {
	if (maxHigh1 < 0) throw invalid_argument("Error: field is empty");
	maxHigh = maxHigh1;
}

/// Получить максимальный уровень подъема
float Helicopter::get_maxHigh() const {
	return maxHigh;
}




/// Класс авто
/// Конструктор без параметров
Auto::Auto() {
	door = 4; /// Количество дверей
}


/// Конструктор с параметрами
Auto::Auto(int door1) {
	set_door(door1);
	//if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
}

/// Деструктор
Auto::~Auto() {};


/// Виртуальный вывод в одну строку
string Auto::toString() const {
	return "Count of doors " + std::to_string(door) + "; " + Transport_Vehicle::toString();
}

/// Установить количество дверей
void Auto::set_door(const int door1) {
	if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// Получить количество дверей
int Auto::get_door() const {
	return door;
}