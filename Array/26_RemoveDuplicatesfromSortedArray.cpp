#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }

        nums.clear();

        for (auto i : s)
        {
            nums.push_back(i);
        }

        return nums.size();
    }
};

int main()
{
    Solution solution;

    // Test case
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    // Call the removeDuplicates function
    int newSize = solution.removeDuplicates(nums);

    // Print the new size of the array
    cout << "New size: " << newSize << endl;

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}