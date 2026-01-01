#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    int neg=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0){
            neg++;
        }
    }
    if(neg==n){
        cout<<"YES"<<endl;
        return;
    }

    set<int> s(v.begin(),v.end());
    int cnt=0;
    for(auto &x : s){
        if(x==0){
            cout<<"NO"<<endl;
            return;
        }
        if(x>=1){
            cnt++;
        }
    }
    if(cnt==1){
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