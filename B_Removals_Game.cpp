#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x : a){
        cin>>x;
    }
    for(auto &x : b){
        cin>>x;
    }
    int al = 0, ar = n - 1;
    int bl = 0, br = n - 1;

    while (al <= ar) {
        if (a[al] != b[bl] && a[al] != b[br]) {
            cout << "Alice"<<endl;
            return;
        }
        if (a[ar] != b[bl] && a[ar] != b[br]) {
            cout << "Alice"<<endl;
            return;
        }
        if (a[ar] == b[br]) {
            ar--;
            br--;
        } else {
            ar--;
            bl++;
        }
    }
    cout<<"Bob"<<endl;
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