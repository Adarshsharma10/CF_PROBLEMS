#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int cnt=0;
    if(s[0]=='y' || s[0]=='Y'){
        cnt++;
    }
    if(s[1]=='e' || s[1]=='E'){
        cnt++;
    }
    if(s[2]=='s' || s[2]=='S'){
        cnt++;
    }
    
    if(cnt==3){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;
    
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