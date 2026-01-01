#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x : a){
        cin>>x;
    }
    ll larg = *max_element(a.begin(),a.end());
    ll min = *min_element(a.begin(),a.end());
    ll idx=-1;
    bool flag = true;
    for(ll i=0;i<n;i++){
        cin>>b[i];
        if(flag==true && b[i]!=-1){
            idx=i;
            flag=false;
        }
    }
    if(idx==-1){
        ll s = min+k;
        cout<<abs(larg-s)+1<<endl;
        return;
    }
        
    ll sum = b[idx] + a[idx];
    for(ll i=0;i<n;i++){
        ll diff = (sum-a[i]);
        if(b[i]==-1){
            if(diff<0){
                cout<<0<<endl;
                return;
            }
            if(diff>k){
                cout<<0<<endl;
                return;
            }
        }
        else{
            if(b[i]!=diff){
                cout<<0<<endl;
                return;
            }
        }
    }
    cout<<1<<endl;

    
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