#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int l,a,b;
    cin>>l>>a>>b;
    int ans=a;
    int larg=-1;
    while(true){
        ans+=b;
        ans=ans%l;
        larg=max(larg,ans);
        if(ans==a){
            break;
        }
    }
    cout<<larg<<endl;
    
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