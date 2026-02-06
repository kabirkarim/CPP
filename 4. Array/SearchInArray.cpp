#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
10 20 30 40 50
Enter element to search: 30
Element found at index 2
*/

int main() {
    int arr[100], n, key, found = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Element found at index " << found << endl;
    else
        cout << "Element not found\n";

    return 0;
}
