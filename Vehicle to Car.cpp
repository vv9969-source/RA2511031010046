#include <iostream>
using namespace std;

class Vehicle {
protected:
    string vehicleNo;
    string model;

public:
    void getVehicle() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNo;
        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle {
private:
    string fuelType;
    double price;

public:
    void getCar() {
        getVehicle();
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nVehicle Number: " << vehicleNo << endl;
        cout << "Model: " << model << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c;
    c.getCar();
    c.display();
    return 0;
}