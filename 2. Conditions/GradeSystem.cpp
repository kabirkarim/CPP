#include <iostream>
using namespace std;

int main() {
    float score, attendance;

    cout << "Enter score: ";
    cin >> score;

    cout << "Enter attendance (%): ";
    cin >> attendance;

    if (score >= 90 && attendance >= 90)
        cout << "Grade A";
    else if (score >= 80 && attendance >= 80)
        cout << "Grade B";
    else if (score >= 70 && attendance >= 70)
        cout << "Grade C";
    else if (score >= 60 && attendance >= 60)
        cout << "Grade D";
    else
        cout << "Grade F";

    return 0;
}
