#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int N = nums.size() / 2;
        int cnt = 1, k = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                cnt++;
                if (cnt > N)
                {
                    k = nums[i];
                }
            }
            else
                cnt = 1;
        }

        return k;
    }
};


int main() {
    Solution obj;
    vector<int> nums = {3, 2, 3};
    int majority = obj.majorityElement(nums);
    cout << "Majority Element: " << majority << endl;
    return 0;
}