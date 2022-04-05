#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, count;
    string o, e;
    cin >> t;
    for (int cases = 1; cases <= t; cases++)
    {
        count = 0;
        cin >> o >> e;
        int len = o.length();
        for (int i = 0; i < len; i++)
        {
            if (e.length() <= o.length())
                break;
            if (o[i] != e[i])
            {
                count++;
                e.erase(e.begin() + i);
                i--;
            }
        }
        if (o == e)
        {
            printf("Case #%d: %d\n", cases, count);
        }
        else
        {
            printf("Case #%d: IMPOSSIBLE\n", cases);
        }
    }
    return 0;
}