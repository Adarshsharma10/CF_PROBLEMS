#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b==c){
        cout<<"YES"<<endl;
    }
    else if(a+c==b){
        cout<<"YES"<<endl;
    }
    else if(b+c==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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