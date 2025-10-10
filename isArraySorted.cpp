/* #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std ;

int isSorted(vector<int> a ,int n ) 
{ //use bool
    for(int i = 0 ; i < n ; i++ ) {
        if(a[i] >= a[i-1]){

        }
        else {
            return false ;

        }
    }
    return true ; 
}

int main() {
    int arr[] = {1,2,1,3,4} ;
    int n  = 5 ;
    isSorted ; 
} */

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> a, int n) {
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {1, 2, 1, 3, 4};
    int n = a.size();
    bool result = isSorted(a, n);

    if(result)
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";

    return 0;
}
