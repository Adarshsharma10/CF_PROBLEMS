#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
const int INF = 1'000'000'007;
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	vector<int> pref1(n + 1);
	vector<int> pref2(n + 1);
	for (int i = 0; i < n; i++){
		pref1[i + 1] = pref1[i] + (a[i] == 1 ? 1 : -1);
		pref2[i + 1] = pref2[i] + (a[i] == 3 ? -1 : 1);
	}

	int mn = INF;
	for (int i = 1; i < n; i++){
		if (pref2[i] - mn >= 0){
			cout << "YES\n";
			return;
		}
		if (pref1[i] >= 0){
			mn = min(mn, pref2[i]);
		}
	}

	cout << "NO\n";
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