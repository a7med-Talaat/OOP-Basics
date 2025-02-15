#include <iostream>
using namespace std;

class Car {
private:
    string model;
public:
    Car(string m) : model(m) {}
    friend void showCar(Car c);
};

void showCar(Car c) {
     cout << "Car Model: " << c.model << endl; 
    }

int main() {
    Car c("BMW");
    showCar(c);
    return 0;
}
