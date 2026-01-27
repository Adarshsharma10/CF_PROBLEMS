#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,m;
    cin >>n>>m;
    ll s = n*m;
    vector<int> v(s);
    for(auto &x: v) cin>>x;

    sort(all(v));
    if (n > m) swap(n, m);

    ll option1 = (v[s-1]-v[0])*(s-n) + (v[s-1]-v[1])*(n-1); //global max at first

    ll option2 = (v[s-1]-v[0])*(s-n) + (v[s-2]-v[0])*(n-1); //global min at first

  
    cout<<max(option1,option2)<<endl;


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