#include <iostream>
using namespace std;

/*
Sample Output
Enter height of triangle: 4
1
1 2
1 2 3
1 2 3 4
*/

int main() {
    int n;
    int arr[10];

    cout << "Enter height of triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << arr[j] << " ";
        cout << endl;
    }

    return 0;
}
