#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
1 2 3 4 5
Enter position and value: 3 99
Updated array:
1 2 99 3 4 5
*/

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position and value: ";
    cin >> pos >> value;

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    cout << "Updated array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
