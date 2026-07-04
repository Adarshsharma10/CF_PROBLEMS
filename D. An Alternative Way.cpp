#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &it : a){
        cin>>it;
    }
    for(auto &it : b){
        cin>>it;
    }
    bool flag = false;
    ll ans = 0;
    for(int i = n-1;i>=0;i--){
        if((!flag) && a[i]<=b[i]){
            continue;
        }
        else if(a[i]>b[i]){
            ans+=b[i]-a[i];
            flag=true;
        }
        else{
            ll v = b[i]-a[i];
            if(ans>0){
                ans=0;
            }
            else{
                if(abs(ans)>v){
                    ans+=v;
                }
                else{
                    ans=0;
                }
            }
            flag=true;
        }
    }
    if(ans==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

// Successfully Submitted