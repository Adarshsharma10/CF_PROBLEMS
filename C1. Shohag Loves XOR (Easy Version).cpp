#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll x, m;
    cin >> x >> m;
    
    ll count = 0;
    ll limit = min(m, 2 * x);
    
    for (ll y = 1; y <= limit; ++y) {
        if (x == y) continue;
        
        ll xor_val = x ^ y;
        
        if ((x % xor_val == 0) || (y % xor_val == 0)) {
            count++;
        }
    }
    
    cout << count << "\n";
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

// Successfully Submitted