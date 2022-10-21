#include <string>//Модуль для работы со строками
#include <iostream>//Модуль для вывода и ввода в консоль
using namespace std;//Пространство имен 

#define SIZE 2 //Количество двигателей для хранения

class Engine {
private:
    string vNameEngine[SIZE];
public:
    void setNameEngine(string);//Ввод названия Двигателя
    void setFuelConsumption(int);//Ввод расхода топлива
    void setVolume(int, string);//Ввод объема двигателя
    void setPowerSupplySystem(string);//Ввод системы питания
    void setTypeFuel(string);//Ввод типа топлива
    void setMax(int);//Ввод максимального пробега
    void setTypeOil(string);//Ввод типа масла
    void setPower(string);//Ввод мощности ДВС

    void getInfo();//Получение информации
    void printInfo();//Вывод информации
};



int main()
{
    
}

