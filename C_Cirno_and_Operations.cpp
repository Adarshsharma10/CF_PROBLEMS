#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    vector<ll> a;
    ll ans = accumulate(all(v), 0LL);
    while(n>1){
        for(int i=0;i<n-1;i++){
            a.push_back(v[i+1]-v[i]);
        }
        ans=max(ans,abs(accumulate(a.begin(),a.end(),0LL)));
        for(int i=0;i<n;i++){
            v[i]=a[i];
        }
        a.clear();
        n--;
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