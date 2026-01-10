#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

ll coins(int cnt){
    ll coin_1=1;
    ll coin_2=1;
    for(int x=1;x<=cnt;x++){
        coin_1*=3;
        coin_2*=3;
    }
    return 3*coin_1 + cnt*(coin_2/3);
}

void solve() {
    ll n;
    cin >> n;
    ll ans=0;
    ll cnt=-1;
    ll s;
    for(ll i=1;i<=n;i*=3){
        s=i;
        cnt++;
        if(i>n){
            break;
        }
    }
    while(n!=0){
        if(s<=n){
            ans+=coins(cnt);
            n=n-s;
        }
        else{
            s=s/3;
            cnt--;
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
    

