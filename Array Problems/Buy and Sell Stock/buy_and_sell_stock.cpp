#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         if (prices.empty()) {
            return 0;
        }

        signed int profit = 0;
        int minPrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int temp = prices[i] - minPrice;
            if (temp > profit) {
                profit = temp;
            }
            minPrice = min(minPrice, prices[i]);
        }

        return profit;
    }
};

int main() {
    Solution solution;
    
    vector<int> prices = {7,6,4,3,1};
    int result = solution.maxProfit(prices);

    cout << "Maximum profit: " << result << endl;

    return 0;
}
