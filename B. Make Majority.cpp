#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int one=0;
    int consecutive_zero=0;
    int curr=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(curr>0){
                consecutive_zero++;
                curr=0;
            }
            one++;
        }
        else{
            curr++;
        }
    }
    if(curr>0){
        consecutive_zero++;
    }
    if(one>consecutive_zero){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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