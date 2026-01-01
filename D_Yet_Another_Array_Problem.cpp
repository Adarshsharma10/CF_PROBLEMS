#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    set<ll> s(all(v));
    ll x = 2;
    while(true){
        for(ll m: s){
            if(__gcd(m,x)==1){
                cout<<x<<endl;  
                return;
            }
        }
        x++;
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

// Successfully submitted