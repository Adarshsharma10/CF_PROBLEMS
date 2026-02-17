#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s,t;
    cin>>s;
    cin>>t;
    int n=s.size();
    int a=t.size();
    int idx=0;
    int store=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]==t[idx]){
            idx++;
            store=i;
            if(idx==a){
                flag=true;
                break;
            }
        }
        if(s[i]=='?'){
            s[i]=t[idx];
            idx++;
            store=i;
            if(idx==a){
                flag=true;
                break;
            }
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                cout<<'s';
            }
            else{
                cout<<s[i];
            }
        }cout<<endl;
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