#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int ans = 1;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            continue;
        }
        else{
            ans++;
        }
    }
    if(ans==1 || ans>2){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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