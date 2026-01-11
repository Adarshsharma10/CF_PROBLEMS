#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cards(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cards[i][j];
        }
        sort(cards[i].begin(), cards[i].end());
    }

    vector<pair<vector<int>, int>> cows;
    for (int i = 0; i < n; i++) {
        cows.push_back({cards[i], i});
    }

    sort(cows.begin(), cows.end()); // lexicographic

    int last = -1;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            int cur = cows[i].first[j];
            if (cur <= last) {
                cout << -1 << endl;
                return;
            }
            last = cur;
        }
    }

    for (auto &c : cows) {
        cout << c.second + 1 << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

// Successfully submitted