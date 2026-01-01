#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<-1<<endl;
        return;
    }
    if(x<y){
        cout<<2<<endl;
    }
    else{
        if(y==1 || x==y+1) cout<<-1<<endl;
        else cout<<3<<endl;
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