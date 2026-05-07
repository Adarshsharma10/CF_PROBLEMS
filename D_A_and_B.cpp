#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int count_a = 0, count_b = 0;
    for (char c : s) {
        if (c == 'a') count_a++;
        else count_b++;
    }
 
    int mid_a = -1, mid_b = -1;
    int cur_a = 0, cur_b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            cur_a++;
            if (cur_a == (count_a + 1) / 2) mid_a = i;
        }
        if (s[i] == 'b') {
            cur_b++;
            if (cur_b == (count_b + 1) / 2) mid_b = i;
        }
    }
 
    ll ans_a = 0, ans_b = 0;
    int op = 2;
    while (op--) {
        if (op == 1) {
            if (count_b == 0) continue;
            int seen_b = 0;
            int rank_of_mid = (count_b + 1) / 2;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'b') {
                    seen_b++;
                    int target = mid_b - (rank_of_mid - seen_b);
                    ans_b += abs(i - target);
                }
            }
        } 
        else {
            if (count_a == 0) continue;
            int seen_a = 0;
            int rank_of_mid = (count_a + 1) / 2;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'a') {
                    seen_a++;
                    int target = mid_a - (rank_of_mid - seen_a);
                    ans_a += abs(i - target);
                }
            }
        }
    }
 
 
    if (count_a <= 1) ans_a = 2e18;
    if (count_b <= 1) ans_b = 2e18;
    
 
    if (count_a <= 1 || count_b <= 1) cout << 0 << endl;
    else cout << min(ans_a, ans_b) << endl;
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