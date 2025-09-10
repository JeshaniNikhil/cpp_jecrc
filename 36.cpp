#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100; // Max size
    int a[SIZE], b[SIZE], sum[SIZE];
    int n;

    cout << "Enter the number of elements in the vectors: ";
    cin >> n;

    // Input validation
    if (n <= 0 || n > SIZE) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    // Input first vector
    cout << "Enter elements of the first vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // Input second vector
    cout << "Enter elements of the second vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    // Add the vectors
    for (int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    // Display the result
    cout << "Resultant vector after addition:\n";
    for (int i = 0; i < n; i++) {
        cout << "sum[" << i << "] = " << sum[i] << endl;
    }

    return 0;
}
