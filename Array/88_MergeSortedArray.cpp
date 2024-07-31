#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // vector<int> v;
        // for(int i=0;i<m;i++){
        //     v.push_back(nums1[i]);
        // }

        // for(int i=0;i<n;i++){
        //     v.push_back(nums2[i]);
        // }

        // for(int i=0;i<m+n;i++){
        //   nums1[i]=v[i];
        // }
        // sort(nums1.begin(),nums1.end());

        int j = 0;
        for (int i = m; i < m + n; i++)
        {
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(), nums1.end());
    }
};


int main()
{
    // Test case
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    // Print the merged array
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}