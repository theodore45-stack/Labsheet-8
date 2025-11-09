#include <iostream>
#include <cstring>
using namespace std;

int countWords(char s[]) {
    int count = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            count++;
    }
    return count;
}

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);
    cout << "Number of words: " << countWords(str);
    return 0;
}
