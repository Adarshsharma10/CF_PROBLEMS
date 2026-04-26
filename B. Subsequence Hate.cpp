#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    int total0 = 0, total1 = 0;
    for (char c : s) {
        if (c == '0') total0++;
        else total1++;
    }

    int ans = min(total0, total1);
    int pref0 = 0, pref1 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') pref0++;
        else pref1++;

        int suff0 = total0 - pref0;
        int suff1 = total1 - pref1;

        ans = min(ans, pref1 + suff0);

        ans = min(ans, pref0 + suff1);
    }

    cout << ans << endl;
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