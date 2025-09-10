#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    int *p1, *p2;

    // Input two integers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Add values using pointers
    sum = *p1 + *p2;

    // Output the result
    cout << "Sum = " << sum << endl;

    return 0;
}
