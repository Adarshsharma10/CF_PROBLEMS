#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    ll prefix = 0;
    ll ans = 0;
    map<ll,int> last;
    last[0]=0;

    int left = 0;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        prefix+=x;
        if(last.count(prefix)){
            left = max(left,last[prefix]+1);
        }
        ans+=(i-left);
        last[prefix]=i;
    }

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}

// Successfully Submitted