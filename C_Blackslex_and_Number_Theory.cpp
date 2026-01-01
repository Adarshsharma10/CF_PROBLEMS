#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    ll ans = v[0];
    for(int i=1;i<n;i++){
        int s = v[i]-v[0];
        if(v[i]%s==v[0]){
            cout<<s<<endl;
            return;
        }
        else{
            cout<<ans<<endl;
            return;
        }
    }
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