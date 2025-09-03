#include<iostream>
#include<math.h>
using namespace std ;

int  main ( ) {
    int n ;
    cout << "Enter Your Number : " ;
    cin >> n; 


    int i =0 ;
    int ans =0 ;

    while(n!=0){

        int digit = n & 1;

        ans = (digit * pow(10,i)) + ans ;
        n = n >> 1 ;
        i++;

    }

    cout << "the answer is : " << ans << endl;

}