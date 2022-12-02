/// @author ������ �.�.
/// ����� ������������ ��������, ��������� �������� � ����������

#include <iostream>
#include <exception>
#include <string>
#include "vehicle.h"

using namespace std;

/// ����������� ��� ����������
Transport_Vehicle::Transport_Vehicle() {
	oil = "Petrol"; /// ��� ������������
	weight = 120.0; /// ������� ������������
	speed = 200.0; /// �������� 
}

/// ����������� � �����������
Transport_Vehicle::Transport_Vehicle(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 < 0) throw invalid_argument("Error: field size < 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	weight = weight1;
	speed = speed1;
}

/// ����������
Transport_Vehicle::~Transport_Vehicle(){}

/// ����������� ����� � ���� ������
string Transport_Vehicle::toString() {
	return "Oil - " + oil + "; " + "Weight - ";//  + weight + "; " + "Speed - " + speed + "; ";
}

/// ������ �������
void Transport_Vehicle::set_oil(string oil1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	oil = oil1;
}

/// �������� �������
string Transport_Vehicle::get_oil() {
	return oil;
}

/// ������ �����
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// �������� �����
float Transport_Vehicle::get_weight() {
	return weight;
}

/// ������ ��������
void Transport_Vehicle::set_speed(float speed1) {
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	speed = speed1;
}

/// �������� ��������
float Transport_Vehicle::get_speed() {
	return speed;
}


/// ����� �������
/// ����������� ��� ����������
Helicopter::Helicopter() {
	typeOfHelicopter = "multi - rotor"; /// ��� ���������
	purposeH = "civil"; /// ���������� ���������
}

/// ����������� � �����������
Helicopter::Helicopter(string typeOfHelicopter1, string purposeH1) {
	if (typeOfHelicopter1 == "") throw invalid_argument("Error: field type is empty");
	if (purposeH1 == "") throw invalid_argument("Error: field purpose is empty");
	typeOfHelicopter = typeOfHelicopter1;
	purposeH = purposeH1;
}


/// ����������
Helicopter::~Helicopter(){}

/// ������ ��������� �� ��������� ������
void Helicopter::set_parametr(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");
	oil = oil1;
	weight = weight;
	speed = speed1;
}

/// ����������� ����� � ���� ������
string Helicopter::toString() {
	return "Helicopter type - " + typeOfHelicopter + "; " + Transport_Vehicle::toString();
}

/// ������ ��� 
void Helicopter::set_typeOfHelicopter(string typeOfHelicopter1) {
	if (typeOfHelicopter1 == "") throw invalid_argument("Error: field is empty");
	typeOfHelicopter = typeOfHelicopter1;
}

/// �������� ��� ��������
string Helicopter::get_typeOfHelicopter() {
	return typeOfHelicopter;
}

/// ������ ���������� ��������
void Helicopter::set_purposeH(string purposeH1) {
	if (purposeH1 == "") throw invalid_argument("Error: field is empty");
	purposeH = purposeH1;
}

/// �������� ���������� ��������
string Helicopter::get_purposeH() {
	return purposeH;
}

/// ����� ����������
/// ����������� ��� ����������
Auto::Auto() {
	typeOfAuto = "off-road"; /// ��� ����������
	purposeA = "civil"; /// ���������� ����������
}

/// ����������� � �����������
Auto::Auto(string typeOfAuto1, string purposeA1) {
	if (typeOfAuto1 == "" && purposeA1 == "") throw invalid_argument("Error: field is empty");
	typeOfAuto = typeOfAuto1;
	purposeA = purposeA1;
}

/// ����������
Auto::~Auto(){}

/// ������ ��������� �� ��������� ������
void Auto::set_parametr(string oil1, float weight1, float speed1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field is <= 0");
	if (speed1 < 0) throw invalid_argument("Error: field is < 0");
	oil = oil1;
	weight = weight1;
	speed = speed1;
}

/// ����������� ����� � ���� ������
string Auto::toString() {
	return "Auto type - " + typeOfAuto + "; " + Transport_Vehicle::toString();
}

/// ������ ��� ����������
void Auto::set_typeOfAuto(string typeOfAuto1) {
	if (typeOfAuto1 == "") throw invalid_argument("Error: field is empty");
	typeOfAuto = typeOfAuto1;
}

/// �������� ��� ����������
string Auto::get_typeOfAuto() {
	return typeOfAuto;
}

/// ������ ���������� ����������
void Auto::set_purposeA(string purposeA1) {
	if (purposeA1 == "") throw invalid_argument("Error: field is empty");
	purposeA = purposeA1;
}

/// �������� ���������� ����������
string Auto::get_purposeA() {
	return purposeA;
}