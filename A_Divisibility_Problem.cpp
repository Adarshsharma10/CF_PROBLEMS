#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll a,b;
    cin>>a>>b;

    if(a%b==0){
        cout<<0<<endl;
        return;
    }
    int k = a/b;
    k++;
    cout<<k*b-a<<endl;

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