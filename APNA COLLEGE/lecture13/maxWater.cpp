#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// TIME LIMIT EXCEEDSSSSSS

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();

        for (int leftBound = 0; leftBound < n; leftBound++) {
            for (int rightBound = leftBound + 1; rightBound < n; rightBound++) {
                int width = rightBound - leftBound;
                int ht = min(height[leftBound], height[rightBound]);  // renamed here
                int area = width * ht;
                maxWater = max(area, maxWater);
            }
        }
        return maxWater;
    }
};
