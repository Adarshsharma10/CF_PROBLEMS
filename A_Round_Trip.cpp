#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll R,X,D,n;
    cin >>R>>X>>D>>n;
    string s;
    cin>>s;
    ll c = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            if(R>=X){
                continue;
            }
            else{
                c++;
            }
        }
        else{
            c++;
            R-=D;    
        }
    }
    cout<<c<<endl;
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

// Successfully submitted