#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    
    sort(all(v),greater<ll>());
    for(int i=0;i<v.size();i++){
        if(v[i]<=c){
            v.erase(v.begin()+i);
            for(int k=0;k<v.size();k++){
                v[k]=v[k]*2;   
            }
            i=-1;
        }
    }
    cout<<v.size()<<endl;
    
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