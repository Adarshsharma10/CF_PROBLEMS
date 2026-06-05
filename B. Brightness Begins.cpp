#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool check(ll n , ll k){
    ll low = 1,high = 2000000000;
    ll sq = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid <= n) {
            sq = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return (n - sq) >= k;
}

void solve() {
    ll k;
    cin >> k;
    ll low = 1, high = LLONG_MAX;
    ll ans = high;
    while(low<=high){
        ll mid = low + (high-low)/2;
        if(check(mid,k)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;
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