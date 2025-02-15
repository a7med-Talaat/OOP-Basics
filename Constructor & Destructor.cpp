#include <iostream>
using namespace std;

class Employee {
public:
//constructor
    Employee() {
         cout << "Employee Created!" << endl; 
        }
//destructor
    ~Employee() {
         cout << "Employee Deleted!" << endl; 
        }
};

int main() {
    Employee e;
    return 0;
}
