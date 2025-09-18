#include<iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {1,2,1,3,4,2,5};

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {   
            cout << "Not Sorted" << endl;
            return 0;
        }
    }

    cout << "Sorted" << endl;
    return 0;
}
