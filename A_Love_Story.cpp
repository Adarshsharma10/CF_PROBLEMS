#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int cnt=0;
    string k = "codeforces";
    for(int i=0;i<10;i++){
        if(s[i]!=k[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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