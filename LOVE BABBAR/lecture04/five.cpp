#include<iostream>
using namespace std;

// Incremental Triangle Pattern

int main(){

    int n;
    cout << "------------Enter Your Number : ------------" << endl;
    cin >> n ;

    for (int i =0;i<=n;i++){
        for (int j=0;j<i;j++){
            cout << j << " ";
        }

        cout << endl;


    }

    cout << "-----------------------------------------------" <<  endl;
}