#include<iostream>
using namespace std ;

int main() {
    int n  ; 
    cout << "Enter Your Num : " ; 
    cin >> n ;

    int dup  = n ; 
    int revNum = 0 ;

    while (n > 0 )
    {
        int lastDigit = n % 10 ; 
        revNum = revNum * 10 + lastDigit ;
        n = n / 10 ;
    }

    if(revNum == dup) 
        cout << "True" << endl; 
    else
        cout << "False" << endl;
    
}