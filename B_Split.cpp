#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> v(2*n);
    unordered_map<int,int> freq;
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    set<int> s(v.begin(),v.end());
    int d = s.size();
    if(d>=n){
        ans+=d;
        for(auto &x: freq){
            if(!(x.second & 1)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    else{
        if(d==1){
            if(!(n&1)){
                cout<<0<<endl;
                return;
            }
            else{
                cout<<2<<endl;
                return;
            }
        }
        else{
            if(n-d==1){
                if(!(n&1)){
                    cout<<d+1<<endl;
                    return;
                }
                else{
                    cout<<d<<endl;
                    return;
                }
            }
            else{
                ans+=d;
                for(auto &x: freq){
                    if(!(x.second & 1)){
                        ans++;
                    }
                }
            cout<<ans<<endl;
            }
        }
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

// Pending