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
	weight = 120.0; /// Сколько заправляются
	speed = 200.0; /// Скорость 
}

/// Конструктор с параметрами
Transport_Vehicle::Transport_Vehicle(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 < 0) throw invalid_argument("Error: field size < 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	weight = weight1;
	speed = speed1;
}

/// Деструктор
Transport_Vehicle::~Transport_Vehicle(){}

/// Виртуальный вывод в одну строку
string Transport_Vehicle::toString() {
	return "Oil - " + oil + "; " + "Weight - ";//  + weight + "; " + "Speed - " + speed + "; ";
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

/// Задать массу
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// Получить массу
float Transport_Vehicle::get_weight() {
	return weight;
}

/// Задать скорость
void Transport_Vehicle::set_speed(float speed1) {
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	speed = speed1;
}

/// Получить скорость
float Transport_Vehicle::get_speed() {
	return speed;
}


/// Класс вертолёт
/// Конструктор без параметров
Helicopter::Helicopter() {
	typeOfHelicopter = "multi - rotor"; /// Тип вертолета
	purposeH = "civil"; /// Назначение вертолета
}

/// Конструктор с параметрами
Helicopter::Helicopter(string typeOfHelicopter1, string purposeH1) {
	if (typeOfHelicopter1 == "") throw invalid_argument("Error: field type is empty");
	if (purposeH1 == "") throw invalid_argument("Error: field purpose is empty");
	typeOfHelicopter = typeOfHelicopter1;
	purposeH = purposeH1;
}


/// Деструктор
Helicopter::~Helicopter(){}

/// Задать параметры из основного класса
void Helicopter::set_parametr(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	weight = weight;
	speed = speed1;
}

/// Виртуальный вывод в одну строку
string Helicopter::toString() {
	return "Helicopter type - " + typeOfHelicopter + "; " + Transport_Vehicle::toString();
}

/// Задать тип 
void Helicopter::set_typeOfHelicopter(string typeOfHelicopter1) {
	if (typeOfHelicopter1 == "") throw invalid_argument("Error: field is empty");
	typeOfHelicopter = typeOfHelicopter1;
}

/// Получить тип вертолёта
string Helicopter::get_typeOfHelicopter() {
	return typeOfHelicopter;
}

/// Задать назначение вертолёта
void Helicopter::set_purposeH(string purposeH1) {
	if (purposeH1 == "") throw invalid_argument("Error: field is empty");
	purposeH = purposeH1;
}

/// Получить назначение вертолёта
string Helicopter::get_purposeH() {
	return purposeH;
}

/// Класс автомобиль
/// Конструктор без параметров
Auto::Auto() {
	typeOfAuto = "off-road"; /// Тип автомобиля
	purposeA = "civil"; /// Назначение автомобиля
}

/// Конструктор с параметрами
Auto::Auto(string typeOfAuto1, string purposeA1) {
	if (typeOfAuto1 == "" && purposeA1 == "") throw invalid_argument("Error: field is empty");
	typeOfAuto = typeOfAuto1;
	purposeA = purposeA1;
}

/// Деструктор
Auto::~Auto(){}

/// Задать параметры из основного класса
void Auto::set_parametr(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field is <= 0");
	if (speed1 < 0) throw invalid_argument("Error: field is < 0");
	oil = oil1;
	weight = weight1;
	speed = speed1;
}

/// Виртуальный вывод в одну строку
string Auto::toString() {
	return "Auto type - " + typeOfAuto + "; " + Transport_Vehicle::toString();
}

/// Задать тип автомобиля
void Auto::set_typeOfAuto(string typeOfAuto1) {
	if (typeOfAuto1 == "") throw invalid_argument("Error: field is empty");
	typeOfAuto = typeOfAuto1;
}

/// Получить тип автомобиля
string Auto::get_typeOfAuto() {
	return typeOfAuto;
}

/// Задать назначение автомобиля
void Auto::set_purposeA(string purposeA1) {
	if (purposeA1 == "") throw invalid_argument("Error: field is empty");
	purposeA = purposeA1;
}

/// Получить назначение автомобиля
string Auto::get_purposeA() {
	return purposeA;
}