#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    int marks;
    void getStudent() {
        getPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }
    void showStudent() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.getStudent();
    s.showStudent();
    return 0;
}
