#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {3,5,8,99,10}; //creating a vector of integers

    v.push_back(1);
                                   //assigning/adding two more elements
    v.push_back(9);

    v[2] = -9;                      // adding -9 to the 2nd position

    for (int i : v){
        cout<< "numbers are : "<< i << endl;    // printing the numbers
    }
}