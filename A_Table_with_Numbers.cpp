#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,h,l;
    cin>>n>>h>>l;
    vector<int> v(n);
    for(auto &x : v) cin>>x;
    vector<bool> idx(n,false);
    sort(all(v));
    int k = n/2;
    int cnth=0;
    int cntl=0;
    int both = 0;

    for(int i=0;i<n;i++){
        if(v[i]<=h && v[i]<=l){
            both++;
        }
        else if(v[i]<=h){
            cnth++;
        }
        else if(v[i]<=l){
            cntl++;
        }
    }

    int ans = 0;
    ans+=min(cnth,cntl);
    cnth-=ans;
    cntl-=ans;

    int extra = max(cnth,cntl);
    int take = min(both,extra);
    ans+=take;
    both-=take;

    ans+=both/2;
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