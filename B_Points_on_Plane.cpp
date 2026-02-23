#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    ll sq = sqrtl(n);
    if(sq*sq==n){
        cout<<sq-1<<"\n";
    }
    else{
        cout<<sq<<endl;
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