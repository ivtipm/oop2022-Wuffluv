#include "Modul.h"
#include <fstream>
#include <cmath>

using namespace std;

// Реализация функций из заголовочного файла

namespace MyModule {

    double calculateSum(const vector<double>& numbers) {
        double sum = 0.0;

        // Вычисление суммы абсолютных значений элементов массива
        for (const double& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

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

} // namespace MyModule
