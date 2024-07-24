#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 2)
            {
                v.emplace_back(it->first);
            }
        }

        return v;
    }
};


int main() {
   
    Solution solution;

  
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};

    
    vector<int> duplicates = solution.findDuplicates(nums);

    // Print the duplicates
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}