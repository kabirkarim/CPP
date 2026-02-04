#include <iostream>
using namespace std;

int main() {
    char maritalStatus, gender;
    int age;

    cout << "Enter marital status (M/U): ";
    cin >> maritalStatus;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    if (maritalStatus == 'M' || maritalStatus == 'm') {
        cout << "Driver is insured.";
    }
    else {
        if ((gender == 'M' || gender == 'm') && age > 30)
            cout << "Driver is insured.";
        else if ((gender == 'F' || gender == 'f') && age > 25)
            cout << "Driver is insured.";
        else
            cout << "Driver is NOT insured.";
    }

    return 0;
}
