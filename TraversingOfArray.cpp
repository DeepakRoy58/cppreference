//Method -1 : Traversing An Array Using Loops */
#include <bits/stdc++.h>
using namespace std;

void printArr(int* arr, int n) {
    cout << "Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Print newline after array
}

int main() {
    int arr[] = {78, 55, 80, 96, 54};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);
    return 0;
}
