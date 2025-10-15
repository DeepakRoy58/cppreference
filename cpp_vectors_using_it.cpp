//using iterators 

#include<iostream>
#include<vector>
using namespace std ; 

int main( ) {
    vector<int>v= {23,4,5,6,7,77} ; 
    
    v.push_back(2) ; 
    v.push_back(3) ;
    v.push_back(4) ;
    v.push_back(7) ; 

    cout << "Using  Indexes :  " ;
    for(int i  = 0 ; i < v.size() ; i++ ){
        cout << v[i] << " ";
        cout << endl;
    }

    cout << "Using iterators :  " ; 
    for(auto it = v.begin() ; it!= v.end() ; it++) {
        cout << *it << " " ;
        cout << endl;
    }

    cout << "Using Reverse Iterators :  " ;
    for(auto rit = v.rbegin() ; rit != v.rend() ; rit++){
        cout << *rit << " " ;
        cout << endl;
    }

    cout << endl ;
    return  0 ;
}
