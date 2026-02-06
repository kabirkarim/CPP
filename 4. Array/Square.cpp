#include <iostream>
using namespace std;

/*
Sample Output
Enter size of square: 4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/

int main() {
    int n;
    int arr[10];

    cout << "Enter size of square: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        arr[i] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }

    return 0;
}
