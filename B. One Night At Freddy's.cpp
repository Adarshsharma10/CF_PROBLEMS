#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve(){
    int n,m,l;
    cin>>n>>m>>l;
    vector<ll> v(n);
    for(auto &x : v){
        cin>>x;
    }

    multiset<int> s;
    for(int i=0;i<min(n+1,m);i++){
        s.insert(0);
    }

    int ans=l;
    int left=n;
    for(int t=1;t<=l;t++){
        auto it = s.begin();
        int val = (*it)+1;
        s.erase(it);
        s.insert(val);
        if(binary_search(v.begin(),v.end(),t)){
            auto it = prev(s.end());
            int val = *it;
            s.erase(it);
            ans-=val;
            if(int(s.size())<left){
                s.insert(0);
            }
            left-=1;
        }
    }
    cout<<ans<<endl;
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