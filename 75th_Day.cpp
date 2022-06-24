#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int mx = INT_MIN;
        for (auto &val : m)
        {
            // cout << val.first << " " << val.second;
            mx = max(mx, val.second);
        }
        cout << n - mx << endl;
    }
    return 0;
}