#include <iostream>
#include <cstring>
using namespace std;

void copyString(char s1[], char s2[]) {
    strcpy(s2, s1);
}

int main() {
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    copyString(str1, str2);
    cout << "Copied string: " << str2;
    return 0;
}
