#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    ll total_popcount = 0;
    ll bit_value = 1;

    while(n>0){
        if(n>= k * bit_value ){
            total_popcount+=k;
            n-=k*bit_value;
        }
        else{
            ll take = n/bit_value;
            total_popcount+=take;
            break;
        }
        bit_value*=2;
    }
    cout<<total_popcount<<endl;
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