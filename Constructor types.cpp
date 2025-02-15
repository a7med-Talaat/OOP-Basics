#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    //  Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called!" << endl;
    }

    //  Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.display();

    Person p2("Ahmed", 20);
    p2.display();

    Person p3 = p2;
    p3.display();

    return 0;
}
