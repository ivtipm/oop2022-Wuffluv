/// @author Rychkov R.V
/// Реализация класса "Двигатель автомобиля"

#include <string>// Модуль для работы со строками
#include <iostream>// Модуль для вывода и ввода в консоль
#include "Class.h"// Подключаем файл заголовка

using namespace std;// Пространство имен 



int main()
{
	Engine AutoEngine;
	AutoEngine.setEngineCapacity("1994 sm^3");// Объем двигателя
	AutoEngine.setModelEngine("Subaru EJ20 E");// Модель двигателя
	AutoEngine.setPowerSupplySystem("Injector");// Система питания
	AutoEngine.setFuel("AI-92");// Тип топлива
	AutoEngine.setResource(300000);// Максимальный пробег
	AutoEngine.setTypeOil("5W-30");// Тип масла
	AutoEngine.setPowerDVS("115 l.f");// Мощность ДВС
	AutoEngine.setExpenditure(9);// Расход топлива


	cout << "Model of Engine: " << AutoEngine.getModelEngine() << endl;// Вывод модели двигателя
	cout << "Enginne Capacity: " << AutoEngine.getEngineCapacity() << endl;// Вывод объема двигателя
	cout << "Power supply system: " << AutoEngine.getPowerSupplySystem() << endl;// Вывод системы питания
	cout << "Fuel: " << AutoEngine.getFuel() << endl;// Вывод типа топлива
	cout << "Resource: " << AutoEngine.getResource() << endl;// Вывод максимального пробега
	cout << "Type of Oil: " << AutoEngine.getTypeOil() << endl;// Вывод типа масла
	cout << "Power DVS: " << AutoEngine.getPowerDVS() << endl;// Вывод мощности ДВС
	cout << "Expenditure: " << AutoEngine.getExpenditure() << endl;// Вывод расхода топлива
}

