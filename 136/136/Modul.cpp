#include "Modul.h"
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Пространство имен модуля
namespace MyModule {

    // Функция для рандомного заполнения массива
    void fillArrayRandom(vector<int>& numbers) {
        for (int& num : numbers) {
            num = rand() % 25; // Заполнение числами от 0 до 25
        }
    }

    // Функция для вычисления суммы значений элементов массива
    int calculateSum(const vector<int>& numbers) {
        int sum = 0; // Сумма значений элементов массива

        // Вычисление суммы значений массива
        for (const int& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

    // Функция для записи результата в файл
    void writeToOutputFile(const string& filename, int result) {
        ofstream outputFile(filename);

        // Проверка успешного открытия файла
        if (!outputFile.is_open()) {
            throw runtime_error("Unable to open the output file.");
        }

        // Запись результата в файл
        outputFile << "Result: " << result << endl;
        outputFile.close();
    }

    // Функция для чтения массива из файла
    void readArrayFromFile(const string& filename, vector<int>& numbers) {
        ifstream inputFile(filename);

        if (!inputFile.is_open()) {
            throw runtime_error("Невозможно открыть файл");
        }

        numbers.clear(); // Очистим массив перед чтением новых значений

        int num;
        while (inputFile >> num) {
            numbers.push_back(num);
        }

        inputFile.close();
    }

    // Функция для записи массива в файл
    void writeArrayToFile(const string& filename, const vector<int>& numbers) {
        ofstream outputFile(filename);

        if (!outputFile.is_open()) {
            throw runtime_error("Невозможно открыть файл");
        }

        for (const int& num : numbers) {
            outputFile << num << " ";
        }

        outputFile.close();
    }

}  
