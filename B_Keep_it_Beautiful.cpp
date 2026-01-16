#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int q;
    cin >> q;
    ll x;
    int last = -1,first =-1;
    bool broken = false;
    for(int i=0;i<q;i++){
        cin>>x;

        if(broken){
            if(last<=x && x<=first){
                cout<<1;
                last=x;
            }
            else{
                cout<<0;
            }

        }
        else{
            if(last==-1){
                last=x;
                first=x;
                cout<<1;
            }
            else if(last<=x){
                last=x;
                cout<<1;
            }
            else if(first>=x){
                last=x;
                broken=true;
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
    }
    cout<<endl;
    
    
    
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