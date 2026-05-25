#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mn=0;
    for(int i=1;i<n;i++){
        mn = max(mn,v[i-1]-v[i]);
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            v[i]+=mn;
        }
        if(v[i]<v[i-1]){
            cout<<"NO"<<endl;
            return;
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