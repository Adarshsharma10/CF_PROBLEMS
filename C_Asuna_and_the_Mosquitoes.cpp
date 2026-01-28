#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(h) (h).begin(), (h).end()

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    ll ans=0;
    int cnt_odd=0;
    for(auto &x: h){
        cin>>x;
        ans+=x;
        if(x&1){
            cnt_odd++;
        }
    }
    ll larg = *max_element(all(h));

    if(!cnt_odd || cnt_odd==n){
        cout<<larg<<endl;
        return;
    }

    cout<<ans-cnt_odd+1<<endl;
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