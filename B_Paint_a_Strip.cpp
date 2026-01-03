#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n<=4){
        cout<<2<<endl;
        return;
    }
    int ans = 1;
    int sum = 2;
    int r = 0;
    int l = 0;
    while(r<n-1){
        r = 2*sum-1;
        if(r<n){
            ans++;
            sum=r+1;
        }
        sum++;
    }
    if(r-n>=0 && r!=n-1){
        ans++;
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