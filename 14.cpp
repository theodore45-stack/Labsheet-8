#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << "Sum (int): " << c.add(3, 4) << endl;
    cout << "Sum (double): " << c.add(2.5, 4.3);
    return 0;
}
