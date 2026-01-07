#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    if(is_sorted(s.begin(),s.end())){
        cout<<0<<endl;
        return;
    }
    string p = s;
    sort(p.begin(),p.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=p[i]){
            ans++;
        }
    }
    cout<<ans/2<<endl;
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