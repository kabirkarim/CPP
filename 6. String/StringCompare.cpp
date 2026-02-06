#include <iostream>
#include <string>
using namespace std;

/*
Output:
Strings are equal
*/

int main() {
    string s1, s2;
    int i = 0;
    bool flag = true;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    while (i < s1.length() && i < s2.length()) {
        if (s1[i] != s2[i]) {
            flag = false;
            break;
        }
        i++;
    }

    if (s1.length() != s2.length())
        flag = false;

    if (flag)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
