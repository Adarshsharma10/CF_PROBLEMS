#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string res;
    vector<int> lo, up;

    for (char c : s) {
        if (c == 'b') {
            if (!lo.empty()) {
                res[lo.back()] = '#';
                lo.pop_back();
            }
        }
        else if (c == 'B') {
            if (!up.empty()) {
                res[up.back()] = '#';
                up.pop_back();
            }
        }
        else {
            int idx = res.size();
            res.push_back(c);
            if (islower(c)) lo.push_back(idx);
            else up.push_back(idx);
        }
    }

    for (char c : res)
        if (c != '#') cout << c;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

// Successfully Submitted
