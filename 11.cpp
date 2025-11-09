#include <iostream>
using namespace std;

class Car {
    string brand;
    float price;
public:
    void input() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter price: ";
        cin >> price;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;
    Car c[n];
    for (int i = 0; i < n; i++) {
        c[i].input();
    }
    cout << "\nCar details:\n";
    for (int i = 0; i < n; i++) {
        c[i].display();
    }
    return 0;
}
