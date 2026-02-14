#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool ok(int n,int m){
    if(n==m){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    else{
        return (ok(n/3,m) || ok(2*n/3,m));
    }
}
void solve() {
    int n,m;
    cin >>n>>m;
    cout<< (ok(n,m) ? "YES" : "NO")<<endl;
    
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