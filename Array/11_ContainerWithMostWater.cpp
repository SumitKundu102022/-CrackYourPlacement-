#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        long long max_area = 0;
        // method 1 but o(n)
        //  for (int i = 0; i < n; i++) {
        //      for (int j = i + 1; j < n; j++) {
        //          long long area = (j - i) * min(height[i], height[j]);
        //          max_area = max(max_area, area);
        //      }
        //  }

        // method 2
        int i = 0;
        int j = n - 1;
        long long area = 0;
        while (i < j)
        {
            area = min(height[i], height[j]) * (j - i);
            max_area = max(max_area, area);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return max_area;
    }
};


int main() {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = solution.maxArea(height);
    cout << "Maximum area: " << maxArea << endl;
    return 0;
}