#include<iostream>
using namespace std ;

int main() {
    int arr[7] = {1,2,4,7,7,7,8} ;
    int n = 7  ;
    int largest = arr[0];
    for (int i = 0; i < n ; i++) {
        if(arr[i] > largest){
            largest = arr[i]; 
        }
    }
    cout << "The Largest Element is : " << largest << endl;
    return 0;
}