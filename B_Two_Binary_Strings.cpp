#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++){
        if(a[i] == '0' && a[i+1] == '1' && b[i] == '0' && b[i+1] == '1') {
            cout<<"YES"<<endl;
            return;
        }

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