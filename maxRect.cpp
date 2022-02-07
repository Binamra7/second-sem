#include <bits/stdc++.h>
#define maxn 10005
using namespace std;

class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int area[maxn];
        for (int i = 0; i < matrix[0].size();i++)
        {
            area[i] = 0;
            for (int j = 0; j < matrix.size();j++)
            {
                int n = i, m = j;
                while(matrix[n][m]==1)
                {
                    if(matrix[n][++m]!=1)
                        m--;
                    else
                        area[i]++;
                    if(matrix[++n][m]!=1)
                        n--;
                    else
                        area[i]++;
                }
            }
        }
        for(auto a: area)
            cout << a << endl;
        return area[0];
    }
};

int main()
{
    Solution s1;
    vector<vector<char>> v={{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
    s1.maximalRectangle(v);
    return 0;
}