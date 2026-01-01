#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    int m;
    cin >> m;

    while (m--) {
        string s;
        cin >> s;

        
        if ((int)s.size() != n) {
            cout << "NO\n";
            continue;
        }

        unordered_map<long long, char> num_to_char;
        unordered_map<char, long long> char_to_num;

        bool ok = true;

        for (int i = 0; i < n; i++) {
            long long num = a[i];
            char c = s[i];

            if (num_to_char.count(num)) {
                if (num_to_char[num] != c) {
                    ok = false;
                    break;
                }
            } else {
                num_to_char[num] = c;
            }

            if (char_to_num.count(c)) {
                if (char_to_num[c] != num) {
                    ok = false;
                    break;
                }
            } else {
                char_to_num[c] = num;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}


// Successfully submitted