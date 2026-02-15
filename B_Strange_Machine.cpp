#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> b;
    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
            b.push_back(i);

    while (q--)
    {
        ll x;
        cin >> x;
        ll op = x, step = 0, p = 0;

        if (b.empty())
        {
            cout << x << "\n";
            continue;
        }

        while (op > 0)
        {
            int cur = p % n;
            auto it = lower_bound(b.begin(), b.end(), cur);

            ll d;
            if (it != b.end())
                d = *it - cur;
            else
                d = (n - cur) + b[0];

            if (op <= d)
            {
                step += op;
                op = 0;
            }
            else
            {
                step += (d + 1);
                op = (op - d) / 2;
                p = (p + d + 1) % n;
            }
        }
        cout << step << "\n";
    }
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

// Successfully Submitted