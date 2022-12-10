/// @author Ðû÷êîâ Ð.Â.
/// Êëàññ Òðàíñïîðòíîå ñðåäñòâî, ïîäêëàññû Âåðòîëåò è Àâòîìîáèëü

#include <iostream>
#include <exception>
#include <string>
#include "vehicle.h"

using namespace std;

/// Êîíñòðóêòîð áåç ïàðàìåòðîâ
Transport_Vehicle::Transport_Vehicle() {
	oil = "Petrol"; /// ×åì çàïðàâëÿþòñÿ
	typeOfVehicle = "Civil";
	purpose = "Movement";
	weight = 120.0; /// Ñêîëüêî çàïðàâëÿþòñÿ
	MaxSpeed = 200.0; /// Ñêîðîñòü 
}

/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
Transport_Vehicle::Transport_Vehicle(string oil1, string typeOfVehicle1, string purpose1, float weight1, float speed1) {
	set_oil(oil1);
	// todo: 
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	if (weight1 < 0) throw invalid_argument("Error: field size < 0");
	if (speed1 < 0) throw invalid_argument("Error: field size < 0");

	typeOfVehicle = typeOfVehicle1;
	purpose = purpose1;
	weight = weight1;
	MaxSpeed = speed1;
}

/// Äåñòðóêòîð
Transport_Vehicle::~Transport_Vehicle() {}

/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
string Transport_Vehicle::toString() {
	return "Oil - " + oil + "; " + "Type of vehicle - " + typeOfVehicle + "; " + "Purpose - " + purpose + "; " + "Weight - " + std::to_string(weight) + "; " + "Speed - " + std::to_string(MaxSpeed) + "; ";
}

/// Çàäàòü òîïëèâî
void Transport_Vehicle::set_oil(string oil1) {
	if (oil1 == "") throw invalid_argument("Error: field is empty");
	oil = oil1;
}

/// Ïîëó÷èòü òîïëèâî
string Transport_Vehicle::get_oil() const {
	return oil;
}

/// Çàäàòü òèï òðàíñïîðòà
void Transport_Vehicle::set_typeOfVehicle(string typeOfVehicle1) {
	if (typeOfVehicle1 == "") throw invalid_argument("Error: field is empty");
	typeOfVehicle = typeOfVehicle1;
}

/// Ïîëó÷èòü òèï òðàíñïîðòà
string Transport_Vehicle::get_typeOfVehicle() const {
	return typeOfVehicle;
}

/// Çàäàòü íàçíà÷åíèå òðàíñïîðòà
void Transport_Vehicle::set_purpose(string purpose1) {
	if (purpose1 == "") throw invalid_argument("Error: field is empty");
	purpose = purpose1;
}

/// Ïîëó÷èòü íàçíà÷åíèå òðàíñïîðòà
string Transport_Vehicle::get_purpose() const {
	return purpose;
}

/// Çàäàòü ìàññó
void Transport_Vehicle::set_weight(float weight1) {
	if (weight1 <= 0) throw invalid_argument("Error: field size <= 0");
	weight = weight1;
}

/// Ïîëó÷èòü ìàññó
float Transport_Vehicle::get_weight() const {
	return weight;
}

/// Çàäàòü ñêîðîñòü
void Transport_Vehicle::set_speed(float MaxSpeed1) {
	if (MaxSpeed1 < 0) throw invalid_argument("Error: field size < 0");
	MaxSpeed = MaxSpeed1;
}

/// Ïîëó÷èòü ñêîðîñòü
float Transport_Vehicle::get_speed() const {
	return MaxSpeed;
}


/// Êëàññ âåðòîë¸ò
/// Êîíñòðóêòîð áåç ïàðàìåòðîâ
Helicopter::Helicopter() {
	maxHigh = 6000; /// Ìàêñèìàëüíûé óðîâåíü ïîäúåìà âåðòîë¸òà
}

/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
Helicopter::Helicopter(float maxHigh1) {
	if (maxHigh1 < 0) throw invalid_argument("Error: field is < 0");
	maxHigh = maxHigh1;
}

/// Äåñòðóêòîð
Helicopter::~Helicopter() {};

/// Çàäàòü ïàðàìåòðû èç îñíîâíîãî êëàññà
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

/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
string Helicopter::toString() {

	return Transport_Vehicle::toString() + "; Maximum lifting level " + std::to_string(maxHigh);
}

/// Çàäàòü ìàñêèìàëüíûé óðîâåíü ïîäúåìà âåðòîëåòà
void Helicopter::set_maxHigh(const float maxHigh1) {
	if (maxHigh1 < 0) throw invalid_argument("Error: field is empty");
	maxHigh = maxHigh1;
}

/// Ïîëó÷èòü òèï âåðòîë¸òà
float Helicopter::get_maxHigh() const {
	return maxHigh;
}




/// Êëàññ àâòîìîáèëü
/// Êîíñòðóêòîð áåç ïàðàìåòðîâ
Auto::Auto() {
	door = 4; /// Êîëè÷åñòâî äâåðåé
}


/// Êîíñòðóêòîð ñ ïàðàìåòðàìè
Auto::Auto(int door1) {
	if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// Äåñòðóêòîð
Auto::~Auto() {};

/// Çàäàòü ïàðàìåòðû èç îñíîâíîãî êëàññà
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

/// Âèðòóàëüíûé âûâîä â îäíó ñòðîêó
string Auto::toString() {
	return "Count of doors " + std::to_string(door) + "; " + Transport_Vehicle::toString();
}

/// Çàäàòü êîëè÷åñòâî äâåðåé
void Auto::set_door(const int door1) {
	if (door1 <= 0) throw invalid_argument("Error: field is <= 0");
	door = door1;
}

/// Ïîëó÷èòü êîëè÷åñòâî äâåðåé
int Auto::get_door() const {
	return door;
}