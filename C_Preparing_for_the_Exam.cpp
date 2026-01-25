#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m,k;
    cin >>n>>m>>k;
    vector<int> a(m);
    vector<int> q(k);
    for(auto &x : a) cin>>x;
    for(auto &x : q) cin>>x;

    if(n==k){
        for(int i=0;i<m;i++){
            cout<<"1";
        }cout<<'\n';
        return;
    }
    if(n-k>1){
        for(int i=0;i<m;i++){
            cout<<"0";
        }cout<<'\n';
        return;
    }
    int missing = 0;
    int number=1;
    for(int i=0;i<k;i++){
        if(q[i]!=number){
            missing = number;
            break;
        }
        else{
            number++;
        }
    }
    missing = number;

    for(int i=0;i<m;i++){
        if(a[i]==missing){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }cout<<'\n';
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