#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, a[100], key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter element to search: ";
    cin >> key;
    int pos = binarySearch(a, n, key);
    if (pos != -1)
        cout << "Element found at position " << pos + 1;
    else
        cout << "Element not found.";
    return 0;
}
