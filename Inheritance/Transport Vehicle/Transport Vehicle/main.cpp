// @author Rychkov R.V.

#include <iostream>
#include <stdexcept>
#include "vehicle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    try {
        cout << "---------------------------------------------" << endl;
        cout << "Создание и отображение транспортного средства:" << endl;
        Transport_Vehicle Transport("Avia and AI", "Civil and Army", "Drive, fly and help", 11000, 300);
        cout << Transport.toString() << endl;
        cout << "---------------------------------------------" << endl;

        cout << "Создание и отображение вертолета:" << endl;
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
        cout << "---------------------------------------------" << endl;

        cout << "Создание и отображение автомобиля:" << endl;
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
        cout << "---------------------------------------------" << endl;

        
        Transport_Vehicle Transport1;
        Helicopter Helicopter3;
        Transport_Vehicle* Transport2 = &Helicopter3;
        Transport_Vehicle* Transport3 = new Auto;

        cout << "Transport1: " << Transport1.toString() << endl;
        cout << "Transport2 (Helicopter): " << Transport2->toString() << endl;
        cout << "Transport3 (Auto): " << Transport3->toString() << endl;

        delete Transport3; //  Освобождение динамически выделенной памяти
        cout << "---------------------------------------------" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }


    //Добавить ассерты
    return 0;
}
