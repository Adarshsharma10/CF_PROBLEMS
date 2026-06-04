#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> freq(n + 2, 0); 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            continue;
        }
        if (freq[i] == 1) {
            cout << "No\n";
            return;
        }
        freq[i + 1] += (freq[i] - 2);
    }
    
    cout << "Yes\n";
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