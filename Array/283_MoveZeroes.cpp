#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                s.emplace_back(nums[i]);
            }
        }
        nums.clear();
        nums.resize(n);
        int j = 0;
        for (auto i : s)
        {
            if (i != 0)
            {
                nums[j] = i;
                j++;
            }
        }
    }
};

int main()
{
    Solution solution;

    // Test case
    vector<int> nums = {0, 1, 0, 3, 12};

    // Call the moveZeroes function
    solution.moveZeroes(nums);

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}