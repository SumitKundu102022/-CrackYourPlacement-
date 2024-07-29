#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < m; j++)
                swap(matrix[i][j], matrix[j][i]);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m / 2; j++)
            {
                swap(matrix[i][j], matrix[i][m - j - 1]);
            }
        }
    }
};


int main()
{
    // Create a test matrix
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    // Create an instance of the Solution class
    Solution solution;

    // Rotate the matrix
    solution.rotate(matrix);

    // Print the rotated matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}