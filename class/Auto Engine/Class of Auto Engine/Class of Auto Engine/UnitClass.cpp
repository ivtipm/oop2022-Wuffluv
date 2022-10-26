#include "Class.h"

using namespace std;

Engine :: Engine() {
	EngineCapacity = ""; //����� ���������
	PowerSupplySystem = ""; //������� �������
	Fuel = ""; //��� �������
	Resource = 0; //������������ ������
	TypeOil = ""; //��� �����
	PowerDVS = ""; //�������� ���
	Expenditure = 0; //������ �������
	ModelEngine = ""; //������ ���������
}

//������ ����� ���������
void Engine::setEngineCapacity(const string &EC) {
	if (EC == "")
		throw invalid_argument("Error: Engine capacity is empty");
	else
		EngineCapacity = EC;
}

//��������� ����� ���������
const string Engine :: getEngineCapacity() {
	return EngineCapacity;
}

//������ ������� �������
void Engine::setPowerSupplySystem(const string &PSS) {
	if (PSS == "")
		throw invalid_argument("Error: Power Supply System is empty");
	else
		PowerSupplySystem = PSS;
}

//��������� ������� �������
const string Engine::getPowerSupplySystem() {
	return PowerSupplySystem;
}

//������ ��� �������
void Engine::setFuel(const string &F) {
	if (F == "")
		throw invalid_argument("Error: Fuel is empty");
	else
		Fuel = F;
}

//��������� ��� �������
const string Engine::getFuel() {
	return Fuel;
}

//������ ������������ ������
unsigned Engine::setResource(unsigned R) {
	if (R == 0)
		throw invalid_argument("Error: Resource = 0");
	else
		Resource = R;
}

//��������� ������������ ������
const unsigned Engine::getResource() {
	return Resource;
}

//������ ��� �����
void Engine::setTypeOil(const string &TO) {
	if (TO == "")
		throw invalid_argument("Error: Type Oil is empty");
	else
		TypeOil = TO;
}

//��������� ��� �����
const string Engine::getTypeOil() {
	return TypeOil;
}

//������ �������� ���
void Engine::setPowerDVS(const string &PDVS) {
	if (PDVS == "")
		throw invalid_argument("Error: Power DVS is empty");
	else
		PowerDVS = PDVS;
}

//��������� �������� ���
const string Engine::getPowerDVS() {
	return PowerDVS;
}

//������ ������ �������
unsigned Engine::setExpenditure(unsigned E) {
	if (E == 0)
		throw invalid_argument("Error: Expenditure = 0");
	else
		Expenditure = E;
}

//��������� ������ �������
const unsigned Engine::getExpenditure() {
	return Expenditure;
}

//������ ������ ���������
void Engine::setModelEngine(const string &ME) {
	if (ME == "")
		throw invalid_argument("Error: Model engine is empty");
	else
		ModelEngine = ME;
}

//��������� ������ ���������
const string Engine::getModelEngine() {
	return ModelEngine;
}

//��������� ���� ������ ������
string Engine::to_string() {
	return ModelEngine + to_string();
}


