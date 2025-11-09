#include <iostream>
using namespace std;

void sumMatrix(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10];
    cout << "Sum of matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[10][10], b[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    cout << "Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];
    sumMatrix(a, b, r, c);
    return 0;
}
