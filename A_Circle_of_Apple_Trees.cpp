#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    int ate = v[0];
    int ans=1;
    for(int i=1;i<n;i++){
        if(ate<v[i]){
            ate=v[i];
            ans++;
        }
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

// Successfully submitted