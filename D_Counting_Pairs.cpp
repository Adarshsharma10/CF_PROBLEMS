#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

ll func(vector<ll> &v,ll limit){
    int s = 0,e = v.size()-1;
    ll cnt=0;
    while(s<e){
        if(v[s]+v[e]<=limit){
            cnt+=(e-s);
            s++;
        }
        else{
            e--;
        }
    }
    return cnt;
}

void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    ll s = accumulate(v.begin(),v.end(),0LL);
    sort(v.begin(),v.end());

    ll L = s-y;
    ll R = s-x;

    ll ans = func(v,R)-func(v,L-1);
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