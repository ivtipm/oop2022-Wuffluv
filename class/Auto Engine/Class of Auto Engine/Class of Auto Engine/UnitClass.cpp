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
string Engine :: getEngineCapacity() const {
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
string Engine::getPowerSupplySystem() const {
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
string Engine::getFuel() const {
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
unsigned Engine::getResource() const {
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
string Engine::getTypeOil() const {
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
string Engine::getPowerDVS() const {
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
unsigned Engine::getExpenditure() const {
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
string Engine::getModelEngine() const {
	return ModelEngine;
}

//��������� ���� ������ ������
string Engine::to_string() {
	return ModelEngine + to_string();
}


