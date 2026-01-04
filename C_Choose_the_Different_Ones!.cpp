#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m,k;
    cin >>n>>m>>k;
    vector<int> a(n); for(auto &x: a) cin>>x;
    vector<int> b(m); for(auto &x: b) cin>>x;
    set<int> s1(a.begin(),a.end());
    set<int> s2(b.begin(),b.end());
    set<int> s3;
    int cnta=0,cntb=0;
    for(auto &x: s1){
        if(x<=k){
            s3.insert(x);
            cnta++;
        }
    }
    for(auto &x: s2){
        if(x<=k){
            s3.insert(x);
            cntb++;
        }
    }
    if(s3.size()==k && (cnta>=k/2 && cntb>=k/2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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