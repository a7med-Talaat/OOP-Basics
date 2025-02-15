#include <iostream>
using namespace std;

class Car {
public:
    string model, color;
};

int main() {
    Car c;
    c.model = "Toyota";
    c.color = "Red";
    cout << "Car: " << c.model << ", Color: " << c.color << endl;
    return 0;
}
