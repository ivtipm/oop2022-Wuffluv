#include <iostream>
#include <assert.h>
#include <math.h>

#include "PerimeterTriangle.h"

using namespace std;


//Расчет периметра
int main() {
	
	assert(fabs(Perimeter(25, 5) - 181.636) < 0.001); //проверка правильности вычислений
	assert(fabs(Perimeter(10, 10) - 64.9839) < 0.001); //проверка правильности вычислений
	assert(fabs(Perimeter(5, 5) - 36.3271) < 0.001); //Проверка правильности вычислений	
	cout << "Test: OK \n"; //Уведомление о том, что проверка выполнена успешно	
	int r, n;
	float p;

	cout << "Enter radius circumscribed circle: "; //Ввод пользователем значения
	cin >> r;
	cout << "Enter amount corner: "; //Ввод пользователем значения
	cin >> n;

	p = Perimeter(r, n);
	cout << "Perimeter n - square = " << p << endl; //Вывод ответа

}