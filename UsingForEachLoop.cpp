//Using For_each loop to traverse an array : 

#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int arr[]= {-98, 34, 76 , 0, 23};

    cout << "Traversing Using Array's Data Type" << endl;
    for (int x : arr) {
        cout << x << " ";
    }
    cout << " Traversing Using Auto Keyword : " << endl;
        for(auto x : arr){
            cout << x << " ";
            cout <<endl;
        }
}
