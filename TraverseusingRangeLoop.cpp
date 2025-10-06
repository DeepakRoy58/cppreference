//Using Range 


#include<iostream>
using namespace std;

int main(){
      int arr[] = {23,34,56,7,88}; 
    
      for(const auto &var : arr) {
        cout << var << " " ;
        cout << endl;
      }
       cin.get() ;
       return 0 ; 
}
