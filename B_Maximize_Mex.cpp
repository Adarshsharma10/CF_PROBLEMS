#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n, x;
    cin >> n >> x;
    
    // Store all occurrences of each remainder in a sorted way
    map<ll, deque<ll>> groups;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    for(ll val : a) {
        groups[val % x].push_back(val);
    }

    ll mex = 0;
    while (true) {
        ll rem = mex % x;
        if (!groups[rem].empty() && groups[rem].front() <= mex) {
            groups[rem].pop_front();
            mex++;
        } else {
            break;
        }
    }
    cout << mex << endl;
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