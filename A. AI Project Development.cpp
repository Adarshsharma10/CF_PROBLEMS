#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    

    ll h1 = (n + x + y - 1) / (x + y);
    
    ll h2 = 0;
    ll lines_during_setup = x * z;
    
    if (lines_during_setup >= n) {
        h2 = (n + x - 1) / x;
    } else {
        ll remaining_lines = n - lines_during_setup;
        ll combined_speed_with_ai = x + 10 * y;
        ll additional_hours = (remaining_lines + combined_speed_with_ai - 1) / combined_speed_with_ai;
        h2 = z + additional_hours;
    }
    

    cout << min(h1, h2) << "\n";
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