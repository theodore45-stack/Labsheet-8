#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!\n";
    }
    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.deposit(1000);
    b.withdraw(400);
    b.showBalance();
    return 0;
}
