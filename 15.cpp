#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
    float r;
public:
    void getData() {
        cout << "Enter radius: ";
        cin >> r;
    }
    void area() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }
    void area() {
        cout << "Area of Rectangle: " << l * b << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    c.getData();
    c.area();
    r.getData();
    r.area();
    return 0;
}
