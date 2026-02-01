#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;

    int l=1,r=n;
    for(int i=0;i<n;i++){
        if(i&1){
            cout<<r<<" ";
            r--;
        }
        else{
            cout<<l<<" ";
            l++;
        }
    }cout<<endl;
    
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