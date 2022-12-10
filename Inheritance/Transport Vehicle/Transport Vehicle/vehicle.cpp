/// @author Рычков Р.В.
/// Класс Транспортное средство, подклассы Вертолет и Автомобиль

#include <iostream>
#include <exception>
#include <string>
#include "vehicle.h"

using namespace std;

/// Конструктор без параметров
Transport_Vehicle::Transport_Vehicle() {
	oil = "Petrol"; /// Чем заправляются
	typeOfVehicle = "Civil";
	purpose = "Movement";
	weight = 120.0; /// Сколько заправляются
	MaxSpeed = 200.0; /// Скорость 
}

/// Конструктор с параметрами
Transport_Vehicle::Transport_Vehicle(string oil1, string typeOfVehicle1, string purpose1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 < 0) throw invalid_argument("Error: field size < 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	typeOfVehicle = typeOfVehicle1;
	purpose = purpose1;
	weight = weight1;
	MaxSpeed = speed1;
}

/// Деструктор
Transport_Vehicle::~Transport_Vehicle(){}

/// Виртуальный вывод в одну строку
string Transport_Vehicle::toString() {
	return "Oil - " + oil + "; " + "Type of vehicle - " + typeOfVehicle + "; " + "Purpose - " + purpose + "; " + "Weight - " + std::to_string(weight) + "; " + "Speed - " + std::to_string(MaxSpeed) + "; ";
}

/// Задать топливо
void Transport_Vehicle::set_oil(string oil1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	oil = oil1;
}

/// Получить топливо
string Transport_Vehicle::get_oil() {
	return oil;
}

/// Задать тип транспорта
void Transport_Vehicle::set_typeOfVehicle(string typeOfVehicle1) {
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	typeOfVehicle = typeOfVehicle1;
}

/// Получить тип транспорта
string Transport_Vehicle::get_typeOfVehicle() {
	return typeOfVehicle;
}

/// Задать назначение транспорта
void Transport_Vehicle::set_purpose(string purpose1) {
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	purpose = purpose1;
}

/// Получить назначение транспорта
string Transport_Vehicle::get_purpose() {
	return purpose;
}

/// Задать массу
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// Получить массу
float Transport_Vehicle::get_weight() const {
	return weight;
}

/// Задать скорость
void Transport_Vehicle::set_speed(float MaxSpeed1) {
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	MaxSpeed = MaxSpeed1;
}

/// Получить скорость
float Transport_Vehicle::get_speed() const {
	return MaxSpeed;
}


/// Класс вертолёт
/// Конструктор без параметров
Helicopter::Helicopter() {
	maxHigh = 6000; /// Максимальный уровень подъема вертолёта
}

/// Конструктор с параметрами
Helicopter::Helicopter(float maxHigh1){
	if (maxHigh1 < 0) throw invalid_argument("Error: field is < 0");
	maxHigh = maxHigh1;
}

/// Деструктор

/// Задать параметры из основного класса
void Helicopter::set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (typeOfVehicle == "") throw invalid_argument("Error: field is empty");
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	typeOfVehicle = typeOfVehicle1;
	purpose = purpose1;
	weight = weight;
	MaxSpeed = MaxSpeed1;
}

/// Виртуальный вывод в одну строку
string Helicopter::toString() {
	return "Maximum lifting level " + std::to_string(maxHigh); 
}

/// Задать маскимальный уровень подъема вертолета
void Helicopter::set_maxHigh(const float &maxHigh1) {
	if (maxHigh1 < 0) throw invalid_argument("Error: field is empty");
	maxHigh = maxHigh1;
}

/// Получить тип вертолёта
float Helicopter::get_maxHigh() const{
	return maxHigh;
}


/// Класс автомобиль
/// Конструктор без параметров
Auto::Auto() {
	door == 4; /// Количество дверей
}

/// Конструктор с параметрами
Auto::Auto(float door1) {
	if (door <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// Деструктор
Auto::~Auto(){}

/// Задать параметры из основного класса
void Auto::set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field is <= 0");
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field is < 0");
	oil = oil1;
	typeOfVehicle = typeOfVehicle1;
	purpose = purpose1;
	weight = weight1;
	MaxSpeed = MaxSpeed1;
}

/// Виртуальный вывод в одну строку
string Auto::toString() {
	return "Count of doors " + std::to_string(door) +"; " + Transport_Vehicle::toString();
}

/// Задать количество дверей
void Auto::set_door(const float &door1){
	if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// Получить количество дверей
float Auto::get_door() const {
	return door;
}
