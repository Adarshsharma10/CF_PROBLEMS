#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin >>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    vector<ll> mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll pre = 0;
        ll x = 0;
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            pre+=v[i][j];
            x+=pre;
        }
        ans+=x;
        mp.push_back(pre);
    }
    sort(mp.rbegin(), mp.rend());
    ll y=0;
    for(int i=0;i<n-1;i++){
        y+=mp[i];
        ans+=y*m;
    }
    cout<<ans<<endl;

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

// Successfully submitted