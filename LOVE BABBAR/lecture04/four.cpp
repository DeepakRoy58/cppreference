#include<iostream>
using namespace std;

// "Number Square Pattern" or "Sequential Number Square"

int main() {
    int n ;
    cout << "Enter Your Number : " ;
    cin >> n;

    int i = 1;
    int count =1 ;

    while (i<=n){
        int j = 1;

        while (j<=n){

            cout << count << " ";
            count+=1;
            j+=1;
        }

        cout << endl;
        i+=1;

    }

}