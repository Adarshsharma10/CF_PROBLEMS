#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s,a;
    cin>>s;
    cin>>a;
    int naagmani=0;
    int idx;
    if(n==1){
        if(a[0]==s[0]){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i] == a[i]){
            idx=i;
            continue;
        }
        else if(s[i]==s[i+1]){
            if(a[i]==a[i+1]){
                i++;
                idx=i;
                continue;
            }
            else{
                naagmani++;
            }
        }
        else{
            naagmani++;
        }
        idx=i;
        
    }
    if(idx==n-2){
        if(s[n-1]!=a[n-1]){
            naagmani++;
        }
    }
    cout<<naagmani<<endl;
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