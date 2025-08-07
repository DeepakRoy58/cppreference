#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i = 1 ; i < prices.size() ; i++) {
            if(prices[i] > bestBuy){
                maxProfit = max ( maxProfit , prices[i] - bestBuy );

            }

            bestBuy = min (prices[i] , bestBuy);
        }

        return maxProfit;
    }
};