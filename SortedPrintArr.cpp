#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n = 7 ;
    int arr[] = {1,2,1,3,4,2,5};

    sort(arr , arr+n) ;

    cout << "Sorted Array is : " ; 
    for(int i =0 ;i<n ;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}