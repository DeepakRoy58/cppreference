#include<iostream>
using namespace std;

//Reverse Number Square Pattern

int main () {
     
    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    int i =1;

    while (i<=n){
        int j =1;

        while(j<=n){
            cout << n-j+1;
            j+=1;
        }

        cout << endl;
        i+=1;
    }
}
