// @author Rychkov R.V.

#include "Modul.h"
#include <fstream>
#include <cmath>

using namespace std;


// Пространство имен модуля
namespace MyModule {

    
    //todo: рандомное заполнение 
    // функция Вычисления суммы
    double calculateSum(const vector<double>& numbers) {
        double sum = 0.0;

        // Вычисление суммы значений массива
        for (const double& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

    //todo: чтение
    //Массив в 1 файл :todo
    // Функция записи в файл 
    void writeToOutputFile(const string& filename, double result) {
        ofstream outputFile(filename);

        // Проверка успешного открытия файла
        if (!outputFile.is_open()) {
            throw runtime_error("Unable to open the output file.");
        }

        // Запись результата в файл
        outputFile << "Result: " << result << endl;
        outputFile.close();
    }

} 