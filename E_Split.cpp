#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int k,n;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> freq;
    for(auto &x : v){
        cin>>x;
        freq[x]++;
    }
    bool pos = true;
    for(auto &x: v){
        if(freq[x]%k) pos=false;
    }
    if(!pos){
        cout<<0<<endl;
        return;
    }

    map<int,int> mp;
    int r=-1;
    ll ans=0;
    for(int l=0;l<n;l++){
        while(r<n-1){
            if(mp[v[r+1]]<freq[v[r+1]]/k){
                mp[v[r+1]]++;
                r++;
            }
            else break;
        }
        ans+=(r-l+1);
        mp[v[l]]--;

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