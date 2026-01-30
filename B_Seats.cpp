#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) (v).begin(), (v).end()
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int curr=0,total=0;
    int cnt_one=0;
    int cnt_zero=0;
    if(s[0]=='0' &&s[1]=='0'){
        cnt_one++;
        s[1]=1;
    }
    if(s[n-1]=='0' && s[n-2]=='0'){
        cnt_one++;
        s[n-2]=1;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt_zero++;
            curr++;
            if(curr==3){
                total++;
                curr=0;
            }
        }
        else{
            curr=0;
        }
 
    }
    if(cnt_zero==n){
        cout<<cnt_zero/2<<endl;
        return;
    }
    for(auto &x : s){
        if(x=='1'){
            cnt_one++;
        }
    }
    cout<<cnt_one+total<<endl;
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