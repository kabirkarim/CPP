#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5, sum;

    cout << "Enter Your MARKS in 5 different Subjects (out of 100)\n";
    cout << "Marks of Subject 01 = ";
    cin >> s1;
    cout << "Marks of Subject 02 = ";
    cin >> s2;
    cout << "Marks of Subject 03 = ";
    cin >> s3;
    cout << "Marks of Subject 04 = ";
    cin >> s4;
    cout << "Marks of Subject 05 = ";
    cin >> s5;

    sum = s1 + s2 + s3 + s4 + s5;
    cout << "Your total marks is " << sum << endl;

    int percentage = sum * 100 / 500;
    cout << "Your Percentage is " << percentage << " %" << endl;

    return 0;
}
