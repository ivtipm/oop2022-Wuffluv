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
	typeOfVehicle = "Civil";
	purpose = "Movement";
	weight = 120.0; /// ������� ������������
	MaxSpeed = 200.0; /// �������� 
}

/// ����������� � �����������
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

/// ����������
Transport_Vehicle::~Transport_Vehicle(){}

/// ����������� ����� � ���� ������
string Transport_Vehicle::toString() {
	return "Oil - " + oil + "; " + "Type of vehicle - " + typeOfVehicle + "; " + "Purpose - " + purpose + "; " + "Weight - " + std::to_string(weight) + "; " + "Speed - " + std::to_string(MaxSpeed) + "; ";
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

/// ������ ��� ����������
void Transport_Vehicle::set_typeOfVehicle(string typeOfVehicle1) {
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	typeOfVehicle = typeOfVehicle1;
}

/// �������� ��� ����������
string Transport_Vehicle::get_typeOfVehicle() {
	return typeOfVehicle;
}

/// ������ ���������� ����������
void Transport_Vehicle::set_purpose(string purpose1) {
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	purpose = purpose1;
}

/// �������� ���������� ����������
string Transport_Vehicle::get_purpose() {
	return purpose;
}

/// ������ �����
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// �������� �����
float Transport_Vehicle::get_weight() const {
	return weight;
}

/// ������ ��������
void Transport_Vehicle::set_speed(float MaxSpeed1) {
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	MaxSpeed = MaxSpeed1;
}

/// �������� ��������
float Transport_Vehicle::get_speed() const {
	return MaxSpeed;
}


/// ����� �������
/// ����������� ��� ����������
Helicopter::Helicopter() {
	maxHigh = 6000; /// ������������ ������� ������� ��������
}

/// ����������� � �����������
Helicopter::Helicopter(float maxHigh1){
	if (maxHigh1 < 0) throw invalid_argument("Error: field is < 0");
	maxHigh = maxHigh1;
}

/// ����������

/// ������ ��������� �� ��������� ������
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

/// ����������� ����� � ���� ������
string Helicopter::toString() {
	return "Maximum lifting level " + std::to_string(maxHigh); 
}

/// ������ ������������ ������� ������� ���������
void Helicopter::set_maxHigh(const float &maxHigh1) {
	if (maxHigh1 < 0) throw invalid_argument("Error: field is empty");
	maxHigh = maxHigh1;
}

/// �������� ��� ��������
float Helicopter::get_maxHigh() const{
	return maxHigh;
}


/// ����� ����������
/// ����������� ��� ����������
Auto::Auto() {
	door == 4; /// ���������� ������
}

/// ����������� � �����������
Auto::Auto(float door1) {
	if (door <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// ����������
Auto::~Auto(){}

/// ������ ��������� �� ��������� ������
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

/// ����������� ����� � ���� ������
string Auto::toString() {
	return "Count of doors " + std::to_string(door) +"; " + Transport_Vehicle::toString();
}

/// ������ ���������� ������
void Auto::set_door(const float &door1){
	if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// �������� ���������� ������
float Auto::get_door() const {
	return door;
}
