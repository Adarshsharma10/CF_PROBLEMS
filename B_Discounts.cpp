#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        vector<int> b(k);
        for (int i = 0; i < k; ++i) cin >> b[i];

        sort(a.begin(), a.end());            // ascending prices
        sort(b.begin(), b.end());            // ascending voucher sizes

        ll total = 0;
        for (ll x : a) total += x;

        ll freebies = 0;
        int L = 0;             // index of smallest not-yet-used
        int R = n - 1;         // index of largest not-yet-used

        for (int x : b) {
            if (R < L) break;  // no items left
            if (x == 1) {
                // free the largest remaining item
                freebies += a[R];
                --R;
            } else {
                // free the smallest remaining item, consume (x-1) largest
                if (R - L + 1 < x) {
                    // not enough items left to use this voucher, skip
                    continue;
                }
                freebies += a[L];
                ++L;
                R -= (x - 1);
            }
        }

        cout << (total - freebies) << '\n';
    }
    return 0;
}


// Pending