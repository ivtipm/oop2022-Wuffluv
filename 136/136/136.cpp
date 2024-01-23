// @author Rychkov R.V.

#include <iostream>
#include "Modul.h"

using namespace std;
using namespace MyModule;

int main() {
    setlocale(LC_ALL, "Rus");
    try {
        //Размер массива
        int n;
        cout << "Введите размер массива n: ";
        cin >> n;

        // Проверка на положительное значение n
        if (n <= 0) {
            throw invalid_argument("n должен ьыть больше 0");
        }
        
        //Димамический массив чисел
        vector<double> numbers(n);

        cout << "Введите " << n << " действительные числа:" << endl;

        // Ввод чисел от пользователя и сохранение их в векторе
        for (int i = 0; i < n; ++i) {
            cout << "Введите число " << i + 1 << ": ";
            cin >> numbers[i];
        }

        // Вычисление суммы абсолютных значений чисел
        double result = calculateSum(numbers);

        // Запись результата в файл
        writeToOutputFile("output.txt", result);

        cout << "Вычисления выполныны. Результат записан в файле output.txt." << endl;
    }
    catch (const exception& e) {
        // Обработка и вывод ошибок
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }

    //добавить ассерты (нахождение суммы по формуле)

    return 0;
}
