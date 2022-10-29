#include <string>
#include <stdexcept>
using namespace std;

//Класс Двигателя автомобиля
class Engine {
private:
	string EngineCapacity;//Объем двигателя
	string PowerSupplySystem;//Система питания
	string Fuel;//Тип топлива
	unsigned Resource;//Максимальный пробег
	string TypeOil;//Тип масла
	string PowerDVS;//Мощность ДВС
	unsigned Expenditure;//Расход топлива
	string ModelEngine;//Модель двигателя

public:
	//Конструктор (инициализирует поля)
	Engine();
	Engine(string EC, string PSS, string F, unsigned R, string TO, string PDVS, unsigned E, string ME);
	//Сеттеры
	void setEngineCapacity(const string &EC);//Задать объем двигателя
	void setPowerSupplySystem(const string &PSS);//Задать систему питания
	void setFuel(const string &F);//Задать тип топлива
	unsigned setResource(unsigned R);//Задать максимальный пробег
	void setTypeOil(const string &TO);//Задать тип масла
	void setPowerDVS(const string &PDVS);//Задать мощность ДВС
	unsigned setExpenditure(unsigned E);//Задать расход топлива
	void setModelEngine(const string &ME);//Задать модель двигателя

	//Геттеры
	string getEngineCapacity() const;//Прочитать объем двигателя
	string getPowerSupplySystem() const;//Прочитать систему питания
	string getFuel() const;//Прочитать тип топлива
	unsigned getResource() const;//Прочитать маскимальный пробег
	string getTypeOil() const;//Прочитать тип масла
	string getPowerDVS() const;//Прочитать мощность ДВС
	unsigned getExpenditure() const;//Прочитать расход топлива
	string getModelEngine() const;//Прочитать модель двигателя

	//Вывод данных
	string to_string();
};