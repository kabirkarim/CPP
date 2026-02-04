#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "You are Underweight.";
    else if (bmi < 25)
        cout << "You have Normal Weight.";
    else if (bmi < 30)
        cout << "You are Overweight.";
    else
        cout << "You are Obese.";

    return 0;
}
