#include <iostream>
#include <string>
using namespace std;

int main() {
    string lines[100]; // Store up to 100 lines
    string line;
    int count = 0;

    cout << "Enter lines of text (enter an empty line to stop):\n";

    // Input lines
    while (count < 100) {
        getline(cin, line);
        if (line.empty()) {
            break; // Stop when an empty line is entered
        }
        lines[count] = line;
        count++;
    }

    int m, n;
    cout << "\nEnter the starting line number (m): ";
    cin >> m;
    cout << "Enter the number of lines to display (n): ";
    cin >> n;

    // Validate m and n
    if (m < 1 || m > count) {
        cout << "Invalid starting line number.\n";
        return 1;
    }
    if (m + n - 1 > count) {
        cout << "Not enough lines to display.\n";
        return 1;
    }

    cout << "\nDisplaying " << n << " lines starting from line " << m << ":\n";
    for (int i = m - 1; i < m - 1 + n; ++i) {
        cout << lines[i] << endl;
    }

    return 0;
}
