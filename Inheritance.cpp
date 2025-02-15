#include <iostream>
using namespace std;

class Vehicle {
public:
    int year;
};

class Car : public Vehicle {
public:
    string model;
};

int main() {
    Car c;
    c.year = 2023;
    c.model = "BMW";
    cout << "Car: " << c.model << ", Year: " << c.year << endl;
    return 0;
}
