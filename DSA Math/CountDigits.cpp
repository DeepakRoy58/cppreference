#include<iostream>
using namespace std; 

int main () {
    int n ;
    cout << "Enter Your Num : ";
    cin >> n ;
    int count = 0 ;
     while(n>0){
        int lastDIgit = n%10;
        count = count + 1;
        n = n / 10;

     }
     cout << "The Digits are : " << count << endl; 
     return 0;
}