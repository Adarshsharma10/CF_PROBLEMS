#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,m,k,l,r;
    cin >>n>>m>>k;
    l=0,r=m;
    while(l+1<r){
        ll mid = (l+r)/2;
        if(((m/(mid+1))*mid+m%(mid+1))*n>=k){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<endl;
    
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