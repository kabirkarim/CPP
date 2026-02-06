#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
3 9 1 7 4
Largest element = 9
*/

int main() {
    int arr[100], n, max;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Largest element = " << max << endl;
    return 0;
}
