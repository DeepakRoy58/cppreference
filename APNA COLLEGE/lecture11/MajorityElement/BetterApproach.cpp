#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Better Approach
// Time Complexity : O(NlogN)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        //sorting
        sort(nums.begin(),nums.end());

        //frequency Count

        int freq = 1 ;
        int ans = nums[0] ;
        for(int i =1;i<n ;i++) {
            if(nums[i] == nums[i-1]){
                freq++;
            }
            else{
                freq =1;
                ans = nums[i] ;
            }

            if(freq>n/2){
                return ans ;
            }
            
        }

        return ans;

    }
};