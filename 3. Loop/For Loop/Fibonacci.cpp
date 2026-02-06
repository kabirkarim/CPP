#include <iostream>
using namespace std;

int main() {
    int count;
    int first = 0, second = 1, fibonacci;

    cout << "Enter number of terms for Fibonacci sequence: ";
    cin >> count;

    for (int i = 1; i <= count; i++) {
        if (i == 1) {
            cout << first << "\t";
        }
        else if (i == 2) {
            cout << second << "\t";
        }
        else {
            fibonacci = first + second;
            cout << fibonacci << "\t";
            first = second;
            second = fibonacci;
        }
    }

    cout << endl;
    return 0;
}
