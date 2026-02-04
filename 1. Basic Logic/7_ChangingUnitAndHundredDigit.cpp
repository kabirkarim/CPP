#include <iostream>
using namespace std;

int main() {
    int num, a, b, c, d, e;

    cout << "Enter a 5 digit Integer: ";
    cin >> num;

    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    d = (num / 1000) % 10;
    e = num / 10000;

    cout << e << d << a << b << c << endl;

    return 0;
}
