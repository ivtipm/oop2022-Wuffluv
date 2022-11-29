/// @author Rychkov R.V
/// Реализация класса "Двигатель автомобиля"

#include <string>// Модуль для работы со строками
#include <iostream>// Модуль для вывода и ввода в консоль
#include "Engine.h"// Подключаем файл заголовка

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
	AutoEngine.setExpenditure(9.2);// Расход топлива

	cout << AutoEngine.to_string() << endl;//Вывод данных
}

