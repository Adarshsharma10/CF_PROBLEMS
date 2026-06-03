#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    sort(v.begin(),v.end());
    ll coins = k;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(v[i][0]<=coins && coins<=v[i][1]){
                coins=max(coins,(ll)v[i][2]);
            }
        }
    }
    cout<<coins<<endl;

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