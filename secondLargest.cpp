/* for (int i = n-2; i < n; i++) : this checks the last 2 
elements , not the whole array
so find the largest and lastly find the  
second largest
*/


#include<iostream>
using namespace std ;
 int main ( ) {
    int arr[7] = {1,4,6,78,9,9,0} ;
    int n = 7 ;
    int second = -1;
    int largest = arr[0] ;

    for(int i  =0 ; i <n ; i++){
        if(arr[i] > largest) {
            largest = arr[i] ;
        }
    }


    for (int i  = 0 ; i < n ; i++ ){ 
        if (arr[i] != largest ) {
            if(second == -1 || arr[i] > second){
                second = arr[i] ;
                /* break; */
            }
        }
    }
    cout << "The largest is : " << largest << endl;
    cout << "Second Largest is : " << second<< endl; 
    return 0; 
 }