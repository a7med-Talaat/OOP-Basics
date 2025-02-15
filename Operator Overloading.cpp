#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) : value(v) {}
    Number operator+(Number n) {
         return Number(value + n.value); 
        }
};

int main() {
    Number n1(5), n2(10);
    Number sum = n1 + n2;
    cout << "Sum: " << sum.value << endl;
    return 0;
}
