#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x : v) cin>>x;

    ll ans=0;

    for(int i=1;i<n-1;i+=2){
        if(v[i-1]>v[i]){
            ans+=v[i-1]-v[i];
            v[i-1]-=v[i-1]-v[i];
        }
        if(v[i]<v[i+1]){
            ans+=v[i+1]-v[i];
            v[i+1]-=v[i+1]-v[i];
        }
        if(v[i+1]+v[i-1]>v[i]){
            ans+=v[i+1]+v[i-1]-v[i];
            v[i+1]-=v[i+1]+v[i-1]-v[i];
        }
    }
    if(!(n&1)){
        if(v[n-1]<v[n-2]){
            ans+=v[n-2]-v[n-1];
            v[n-2]-=v[n-2]-v[n-1];
        }
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

// Successfully Submitted