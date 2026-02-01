#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s; 
    cin >> s;
    
    long long sum = 0;
    int cnt2 = 0, cnt3 = 0;
    
    for (char c : s) {
        int val = c - '0';
        sum += val;
        if (val == 2) cnt2++;
        else if (val == 3) cnt3++;
    }

  
    for (int i = 0; i <= min(cnt2, 10); ++i) {
        for (int j = 0; j <= min(cnt3, 10); ++j) {
           
            if ((sum + i * 2 + j * 6) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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