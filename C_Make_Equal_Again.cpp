#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v){
        cin>>x;
    }
    set<int> s(v.begin(),v.end());
    if(s.size()==1){
        cout<<0<<endl;
        return;
    }
    int len1=1,len2=1;
    int len3=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            len1++;
        }
        else{
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(v[i]==v[i-1]){
            len2++;
        }
        else{
            break;
        }
    }
    
    if(v[0]==v[n-1]){
        cout<<n-(len1+len2)<<endl;
    }
    else{
        cout<<n-max(len1,len2)<<endl;
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