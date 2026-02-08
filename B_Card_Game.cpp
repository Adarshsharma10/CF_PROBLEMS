#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a[2];
    int b[2];
    cin>>a[0]>>a[1]>>b[0]>>b[1];
    int ans=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int suneet=0,slavic=0;
            if(a[i]>b[j]){
                suneet++;
            }
            else if(a[i]<b[j]){
                slavic++;
            }

            if(a[1-i]>b[1-j]){
                suneet++;
            }
            else if(a[1-i]<b[1-j]){
                slavic++;
            }
            if(suneet>slavic){
                ans++;
            }
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