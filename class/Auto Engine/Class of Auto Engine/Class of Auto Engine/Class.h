#include <string>
#include <stdexcept>
using namespace std;

//Класс Двигателя автомобиля
class Engine {
private:
	std :: string EngineCapacity;//Объем двигателя
	std :: string PowerSupplySystem;//Система питания
	std :: string Fuel;//Тип топлива
	unsigned Resource;//Максимальный пробег
	std :: string TypeOil;//Тип масла
	std :: string PowerDVS;//Мощность ДВС
	unsigned Expenditure;//Расход топлива
	std :: string ModelEngine;//Модель двигателя

public:
	//Конструктор (инициализирует поля)
	// Engine();
	Engine(std::string EC, std::string PSS, std::string F, unsigned R, std::string TO, std::string PDVS, unsigned E, std::string ME);
	//Сеттеры
	void setEngineCapacity(const std :: string &EC);//Задать объем двигателя
	void setPowerSupplySystem(const std :: string &PSS);//Задать систему питания
	void setFuel(const std :: string &F);//Задать тип топлива
	unsigned setResource(unsigned R);//Задать максимальный пробег
	void setTypeOil(const std :: string &TO);//Задать тип масла
	void setPowerDVS(const std :: string &PDVS);//Задать мощность ДВС
	unsigned setExpenditure(unsigned E);//Задать расход топлива
	void setModelEngine(const std :: string &ME);//Задать модель двигателя

	//Геттеры
	const std :: string getEngineCapacity();//Прочитать объем двигателя
	const std :: string getPowerSupplySystem();//Прочитать систему питания
	const std :: string getFuel();//Прочитать тип топлива
	const unsigned getResource();//Прочитать маскимальный пробег
	const std :: string getTypeOil();//Прочитать тип масла
	const std :: string getPowerDVS();//Прочитать мощность ДВС
	const unsigned getExpenditure();//Прочитать расход топлива
	const std :: string getModelEngine();//Прочитать модель двигателя

	
};