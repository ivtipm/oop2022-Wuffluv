// @author Rychkov R.V.

#ifndef MYMODULE_H
#define MYMODULE_H

#include <vector>
#include <string>

using namespace std;

// Пространство имен модуля
namespace MyModule {

    // Функция для вычисления суммы абсолютных значений элементов массива
    double calculateSum(const vector<double>& numbers);

    // Функция для записи результата в файл
    void writeToOutputFile(const string& filename, double result);

} 

#endif 
