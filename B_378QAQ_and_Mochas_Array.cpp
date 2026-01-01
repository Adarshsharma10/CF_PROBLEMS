#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


    void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &p : v) cin >> p;

    sort(v.begin(), v.end());
    ll x = v[0];

    vector<ll> b;
    for (ll it : v)
        if (it % x != 0)
            b.push_back(it);

    if (b.empty()) {
        cout << "YES\n";
        return;
    }

    ll y = *min_element(b.begin(), b.end());

    for (ll it : v) {
        if (it % x == 0 || it % y == 0)
            continue;
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// Successfully submitted