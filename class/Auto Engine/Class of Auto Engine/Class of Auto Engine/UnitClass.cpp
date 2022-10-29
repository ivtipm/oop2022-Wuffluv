#include "Class.h"

using namespace std;

Engine :: Engine() {
	EngineCapacity = ""; //Объем двигателя
	PowerSupplySystem = ""; //Система питания
	Fuel = ""; //Тип топлива
	Resource = 0; //Максимальный пробег
	TypeOil = ""; //Тип масла
	PowerDVS = ""; //Мощность ДВС
	Expenditure = 0; //Расход топлива
	ModelEngine = ""; //Модель двигателя
}

//Задать объем двигателя
void Engine::setEngineCapacity(const string &EC) {
	if (EC == "")
		throw invalid_argument("Error: Engine capacity is empty");
	else
		EngineCapacity = EC;
}

//Прочитать объем двигателя
string Engine :: getEngineCapacity() const {
	return EngineCapacity;
}

//Задать систему питания
void Engine::setPowerSupplySystem(const string &PSS) {
	if (PSS == "")
		throw invalid_argument("Error: Power Supply System is empty");
	else
		PowerSupplySystem = PSS;
}

//Прочитать систему питания
string Engine::getPowerSupplySystem() const {
	return PowerSupplySystem;
}

//Задать тип топлива
void Engine::setFuel(const string &F) {
	if (F == "")
		throw invalid_argument("Error: Fuel is empty");
	else
		Fuel = F;
}

//Прочитать тип топлива
string Engine::getFuel() const {
	return Fuel;
}

//Задать маскимальный пробег
unsigned Engine::setResource(unsigned R) {
	if (R == 0)
		throw invalid_argument("Error: Resource = 0");
	else
		Resource = R;
}

//Прочитать максимальный пробег
unsigned Engine::getResource() const {
	return Resource;
}

//Задать тип масла
void Engine::setTypeOil(const string &TO) {
	if (TO == "")
		throw invalid_argument("Error: Type Oil is empty");
	else
		TypeOil = TO;
}

//Прочитать тип масла
string Engine::getTypeOil() const {
	return TypeOil;
}

//Задать мощность ДВС
void Engine::setPowerDVS(const string &PDVS) {
	if (PDVS == "")
		throw invalid_argument("Error: Power DVS is empty");
	else
		PowerDVS = PDVS;
}

//Прочитать мощность ДВС
string Engine::getPowerDVS() const {
	return PowerDVS;
}

//Задать расход топлива
unsigned Engine::setExpenditure(unsigned E) {
	if (E == 0)
		throw invalid_argument("Error: Expenditure = 0");
	else
		Expenditure = E;
}

//Прочитать расход топлива
unsigned Engine::getExpenditure() const {
	return Expenditure;
}

//Задать модель двигателя
void Engine::setModelEngine(const string &ME) {
	if (ME == "")
		throw invalid_argument("Error: Model engine is empty");
	else
		ModelEngine = ME;
}

//Прочитать модель двигателя
string Engine::getModelEngine() const {
	return ModelEngine;
}

//Получение всех данных класса
string Engine::to_string() {
	return ModelEngine + to_string();
}


