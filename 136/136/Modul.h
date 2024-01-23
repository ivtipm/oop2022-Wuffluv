#ifndef MYMODULE_H
#define MYMODULE_H

#include <vector>
#include <string>

using namespace std;

// Пространство имен модуля
namespace MyModule {

    // Функция для рандомного заполнения массива
    void fillArrayRandom(vector<int>& numbers);

    // Функция для вычисления суммы абсолютных значений элементов массива
    int calculateSum(const vector<int>& numbers);

    // Функция для записи результата в файл
    void writeToOutputFile(const string& filename, int result);

    // Функция для чтения массива из файла
    void readArrayFromFile(const string& filename, vector<int>& numbers);

    // Функция для записи массива в файл
    void writeArrayToFile(const string& filename, const vector<int>& numbers);

}  

#endif  
