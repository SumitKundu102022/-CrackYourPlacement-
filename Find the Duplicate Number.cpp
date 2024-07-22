#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int key;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                key = it.first;
            }
        }

        return key;
    }
};


int main(){
    Solution sol;

    // Test case
    vector<int> nums = {1, 3, 4, 2, 2};

    int result = sol.findDuplicate(nums);

    cout << "The duplicate number is: " << result << endl;

    return 0;
}