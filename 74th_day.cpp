#include <bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;
long long fastPow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = ((res % m) * (a % m)) % m;
        }
        a = ((a % m) * (a % m)) % m;
        b = b >> 1;
    }
    return res;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long ans;
        ans = ((fastPow(2, n - 1) % m) * (x % m)) % m;
        cout << ans << endl;
    }
    return 0;
}