#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int len = 2 * n;
    vector<int> a(len);
    for (int i = 0; i < len; ++i) {
        cin >> a[i];
    }
    int mx_mex = 0;
    vector<int> pr(n + 1, 0);
    int t = 0;
 
    auto get_mex = [&](int l, int r) {
        t++;
        for (int i = l; i <= r; ++i) {
            if (a[i] < n) {
                pr[a[i]] = t;
            }
        }
        int mex = 0;
        while (mex <= n && pr[mex] == t) {
            mex++;
        }
        return mex;
    };

    for (int i = 0; i < len; ++i) {
        int l = i, r = i;
        while (l >= 0 && r < len && a[l] == a[r]) {
            l--;
            r++;
        }
        l++; r--; 
        if (r >= l) {
            mx_mex = max(mx_mex, get_mex(l, r));
        }
    }

    for (int i = 0; i < len - 1; ++i) {
        int l = i, r = i + 1;
        while (l >= 0 && r < len && a[l] == a[r]) {
            l--;
            r++;
        }
        l++; r--; 
        if (r >= l) {
            mx_mex = max(mx_mex, get_mex(l, r));
        }
    }
 
    cout << mx_mex << "\n";
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