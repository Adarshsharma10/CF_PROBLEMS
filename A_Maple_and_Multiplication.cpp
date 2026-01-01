#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a,b;
    cin >>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int larg = max(a,b);
    int smal = min(a,b);
    if(larg%smal==0){
        cout<<1<<endl;
    }
    else if(smal*larg==larg){
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