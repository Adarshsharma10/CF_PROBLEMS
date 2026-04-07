#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    int n;
    cin >> n;
    vector<ll> f(n), ans(n);
    for (auto &x : f)
    {
        cin >> x;
    }
    for (int i = n - 2; i > 0; i--)
    {
        ans[i] = (f[i - 1] - 2 * f[i] + f[i + 1]) / 2;
    }
    ll x = accumulate(all(ans), 0LL);
    ans[0] = ((f[n - 1] - f[n - 2]) + ((f[n - 1] + f[0]) / (n - 1)) - 2 * x) / 2;
    ans[n - 1] = ((f[n - 1] - f[n - 2]) - (f[0] + f[n - 1]) / (n - 1)) / -2;
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Successfully submitted