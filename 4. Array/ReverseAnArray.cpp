#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
1 2 3 4 5
Reversed array:
5 4 3 2 1
*/

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
