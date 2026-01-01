#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,c,d;
    cin >>n>>c>>d;
    bool flag=true;
    vector<ll> b(n*n);
    for(int i=0;i<b.size();i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    vector<ll> ans;
    ll s,a;
    ans.push_back(b[0]);
    for(int i=0;i<n;i++){
        if(i==0){
            a=b[0];
            s=b[0];
        }
        else{
            a+=c;
            ans.push_back(a);
            s=a;
        }
        for(int i=0;i<n-1;i++){
            s+=d;
            ans.push_back(s);
        }
    }
    
    
    unordered_map<ll, int> freq;

    for (ll x : b) freq[x]++;

    for (ll x : ans) {
        if (freq[x] == 0){
            flag= false;
            break;
        }

        freq[x]--;
    }


    if(flag){
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

// SUccessfully submitted