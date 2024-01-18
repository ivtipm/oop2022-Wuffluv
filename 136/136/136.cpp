#include <iostream>
#include "Modul.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    try {
        int n;
        cout << "Введите размер массива n: ";
        cin >> n;

        // Проверка на положительное значение n
        if (n <= 0) {
            throw invalid_argument("n должна быть положительной");
        }

        vector<double> numbers(n);

        cout << "Введите " << n << " действительные числа:" << std::endl;

        // Ввод чисел от пользователя и сохранение их в векторе
        for (int i = 0; i < n; ++i) {
            cout << "Введите число " << i + 1 << ": ";
            cin >> numbers[i];
        }

        // Вычисление суммы абсолютных значений чисел
        double result = MyModule::calculateSum(numbers);

        // Запись результата в файл
        MyModule::writeToOutputFile("output.txt", result);

        cout << "Вычисления выполныны. Результат записан в файле output.txt." << endl;
    }
    catch (const exception& e) {
        // Обработка и вывод ошибок
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }

    return 0;
}
