#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(const vector<int>& prices) {
    if (prices.empty()) return 0;

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (size_t i = 1; i < prices.size(); ++i) {
        if (prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(prices[i], bestBuy);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
