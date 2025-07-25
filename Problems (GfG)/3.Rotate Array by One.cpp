

//  Question:

//Given an array arr, rotate the array by one position in clockwise direction.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.

#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
   void rotate(vector<int>& arr) {
        int n = arr.size(); 
        int last = arr[n - 1];
        
        // Shift all elements to the right
        for (int i = n - 1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        
        // Put last element at the beginning
        arr[0] = last;
    }
};
