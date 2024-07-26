#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> st;
        for (char c : s)
        {

            if (c == '(')
                st.push(')');
            else if (c == '{')
                st.push('}');
            else if (c == '[')
                st.push(']');
            else
            {
                if (st.empty() || st.top() != c)
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};


int main() {
    Solution solution;
    string input = "{[()]}";
    bool isValid = solution.isValid(input);
    if (isValid) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    return 0;
}