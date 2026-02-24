#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0,mn=-1,mx=-1;
    for(int i=0;i<n;i++){
        if(v[i]>=mn && v[i]<=mx){
            mx=v[i]+1;
        }
        else{
            ans++;
            mn=mx=v[i]+1;
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