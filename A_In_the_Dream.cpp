#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int h1_big = max(a,b);
    int h1_small = min(a,b);
    int h2_small = min(c-a,d-b);
    int h2_big = max(c-a,d-b);

    if(h1_big<=2*h1_small+2 && h2_big<=2*h2_small+2){
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


// Successfully submitted