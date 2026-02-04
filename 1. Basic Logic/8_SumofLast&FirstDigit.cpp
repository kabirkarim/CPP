#include <iostream>
using namespace std;

int main() {
    int num, first, last;

    cout << "Enter a 4 digit Integer: ";
    cin >> num;

    last = num % 10;
    first = num / 1000;

    cout << "The sum of last & first digit is: " << first + last << endl;

    return 0;
}
