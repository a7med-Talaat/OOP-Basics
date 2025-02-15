#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() {
         cout << "Dog barks!" << endl; 
        }
};

int main() {
    Dog d;
    d.makeSound();
    return 0;
}
