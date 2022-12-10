/// @author Рычков Р.В.
/// Основная программа

#include <iostream>
#include <exception>
#include "vehicle.h"

using namespace std;

int main() {
	try {
		Transport_Vehicle Transport("Avia and AI", "Civil and Army", "Drive, fly and help", 11000, 300);
		cout << Transport.toString() << endl << endl;

		Helicopter Helicopter1(6000.0);
		Helicopter1.set_parametr("Avia", "civil", "fly", 11000.0, 350.0);
		cout << Helicopter1.toString() << endl;

		Helicopter Helicopter2;
		Helicopter2.set_oil("Avia");
		Helicopter2.set_typeOfVehicle("Army");
		Helicopter2.set_purpose("fly and help");
		Helicopter2.set_weight(4000);
		Helicopter2.set_speed(350);
		cout << Helicopter2.toString() << endl;

		Auto Auto1(4);
		Auto1.set_parametr("AI-95", "civil", "drive", 3000, 220);
		cout << Auto1.toString() << endl;

		Auto Auto2;
		Auto2.set_oil("AI-97");
		Auto2.set_typeOfVehicle("Army");
		Auto2.set_purpose("Drive and help");
		Auto2.set_weight(3500);
		Auto2.set_speed(180);
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