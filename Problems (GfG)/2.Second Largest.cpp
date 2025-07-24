#include<iostream>
#include<vector>

using namespace std; 

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {

        
        int largest = -1, second = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] != largest && arr[i] > second) {
                second = arr[i];
            }
        }

        return second;
    }
};


// ->ALTERNATIVE SOLUTION<-

// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
        
//         int n = arr.size();

//         int largest = -1;
//         int second = -1 ;

//         for (int i = 0; i < n ; i++){
//             if(arr[i]>largest)
//             largest = arr[i];
//         }

//         for (int i = 0;  i < n ; i++ ){
//             if(arr[i]!=largest)
//             second = max(arr[i],largest);
//         }
//     }
// };

