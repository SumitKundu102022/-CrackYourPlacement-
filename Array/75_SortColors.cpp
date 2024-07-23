#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int n = arr.size();
        multiset<int> m;
        for (int i = 0; i < n; i++)
        {
            m.insert(arr[i]);
        }

        auto it = m.begin();
        for (int i = 0; i < n; i++)
        {
            arr[i] = *it;
            it++;
        }
    }
};

int main()
{
    Solution sol;

    // Test case
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    sol.sortColors(arr);

    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
