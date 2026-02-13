#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k,d,w;
    cin>>n>>k>>d>>w;

    vector<int> v(n);
    for(auto &x :v){
        cin>>x;
    }
    int packs=0;

    for(int i = 0; i < n; ) {
        packs++;
        
        int expiration_time = v[i] + w + d;
        
        int count = 0;
        while(i < n && count < k && v[i] <= expiration_time) {
            i++;
            count++;
        }
   
    }


    cout<<packs<<endl;
    
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