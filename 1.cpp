#include <iostream>
using namespace std;

void checkPrime(int n) {
    int i, count = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkPrime(num);
    return 0;
}
