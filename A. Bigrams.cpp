#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int> v(k);
    
    int count_ge_2 = 0;
    int max_val = 0;
    
    for(int i = 0; i < k; i++) {
        cin >> v[i];
        if (v[i] >= 2) {
            count_ge_2++;
        }
        max_val = max(max_val, v[i]);
    }
    
    if (max_val >= 3 || count_ge_2 >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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

// Successfully Submit