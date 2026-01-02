#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    vector<ll> a(n);
    vector<ll> b(k);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end());
    
    ll min_cost = 0;
    int i=0,j=0;
    while(i<n && j<k){
        int x = b[j];
        while(i<n && x>1){
            min_cost+=a[i];
            i++;
            x--;
        }
        i++,j++;
    }
    while(i<n){
        min_cost+=a[i];
        i++;
    }
    cout<<min_cost<<endl;
   
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