#include <iostream>
using namespace std;

/*
Sample Output
Enter size of first array: 3
1 2 3
Enter size of second array: 2
4 5
Merged array:
1 2 3 4 5
*/

int main() {
    int a[50], b[50], c[100];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    for (int i = 0; i < n1; i++)
        c[i] = a[i];

    for (int i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    cout << "Merged array:\n";
    for (int i = 0; i < n1 + n2; i++)
        cout << c[i] << " ";

    return 0;
}
