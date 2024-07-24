#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mn = INT_MAX;
        int mx = 0;
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i - 1] < prices[i])
            {
                mn = min(mn, prices[i - 1]);
                int diff = abs(prices[i] - mn);
                profit = diff;
                mx = max(mx, profit);
            }
        }

        return mx;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution sol;
    int profit = sol.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
