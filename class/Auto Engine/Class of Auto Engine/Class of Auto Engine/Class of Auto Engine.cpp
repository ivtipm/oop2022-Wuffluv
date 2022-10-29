#include <string>//Модуль для работы со строками
#include <iostream>//Модуль для вывода и ввода в консоль
#include "Class.h"//Подключаем файл заголовка

using namespace std;//Пространство имен 



int main()
{
	Engine AutoEngine;
	AutoEngine.setEngineCapacity("1994 sm^3");
	AutoEngine.setModelEngine("Subaru EJ20 E");
	AutoEngine.setPowerSupplySystem("Injector");
	AutoEngine.setFuel("AI-92");
	AutoEngine.setResource(300000);
	AutoEngine.setTypeOil("5W-30");
	AutoEngine.setPowerDVS("115 l.f");
	AutoEngine.setExpenditure(9);


	cout << "Model of Engine: " << AutoEngine.getModelEngine() << endl;
	cout << "Enginne Capacity: " << AutoEngine.getEngineCapacity() << endl;
	cout << "Power supply system: " << AutoEngine.getPowerSupplySystem() << endl;
	cout << "Fuel: " << AutoEngine.getFuel() << endl;
	cout << "Resource: " << AutoEngine.getResource() << endl;
	cout << "Type of Oil: " << AutoEngine.getTypeOil() << endl;
	cout << "Power DVS: " << AutoEngine.getPowerDVS() << endl;
	cout << "Expenditure: " << AutoEngine.getExpenditure() << endl;
}

