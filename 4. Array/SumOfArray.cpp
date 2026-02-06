#include <iostream>
using namespace std;

/*
Sample Output
Enter number of elements: 5
1 2 3 4 5
Sum of array = 15
*/

int main() {
    int arr[100], n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array = " << sum << endl;
    return 0;
}
