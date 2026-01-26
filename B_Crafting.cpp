#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x: a) cin>>x;
    for(auto &y: b) cin>>y;

    vector<ll> diff;
    for(int i=0;i<n;i++){
        diff.push_back(b[i]-a[i]);
    }
    ll larg_idx = max_element(diff.begin(),diff.end())-diff.begin();
    ll larg = *max_element(diff.begin(),diff.end());

    for(int i=0;i<n;i++){
        if(i!=larg_idx){
           diff[i]+=larg;
           if(diff[i]>0){
                cout<<"NO"<<endl;
                return;
           }
        }
    }
    cout<<"YES"<<endl;
    




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