/// @author Рычков Р.В.
/// Основная программа

#include <iostream>
#include <exception>
#include "vehicle.h"

using namespace std;

int main() {
	try {
		Transport_Vehicle Transport("AI-80", 2000, 200);
		cout << Transport.toString() << endl << endl;

		Helicopter Helicopter1("multy - rotor", "civil");
		Helicopter1.set_parametr("Avia", 4000, 350);
		cout << Helicopter1.toString() << endl;

		Helicopter Helicopter2;
		Helicopter2.set_oil("Avia");
		Helicopter2.set_weight(4000);
		Helicopter2.set_speed(350);
		cout << Helicopter2.toString() << endl;

		Auto Auto1("off - road", "civil");
		Auto1.set_parametr("AI-95", 2000, 180);
		cout << Auto1.toString() << endl;

		Auto Auto2;
		Auto2.set_oil("AI-97");
		Auto2.set_weight(3500);
		Auto2.set_speed(220);
		cout << Auto2.toString() << endl;

		Transport_Vehicle Transport1;
		Helicopter Helicopter3;
		Transport_Vehicle* Transport2 = &Helicopter3; /// Указатель на тип Helicopter
		Transport_Vehicle* Transport3 = new Auto; /// Создание динамического объекта

		cout << Transport2->toString() << endl;
		cout << Transport3->toString() << endl; /// Программа сама распознает какой тип хранится
	}
	catch (invalid_argument e) {
		cout << e.what();
	}
	
}