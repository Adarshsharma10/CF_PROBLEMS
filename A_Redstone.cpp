#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    // int freq[1000]={0};
    // bool flag = false;
    // for(int i=0;i<n;i++){
    //     freq[v[i]]++;
    //     if(freq[v[i]]==2){
    //         flag=true;
    //         break;
    //     }
    // }
    // if(flag){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    set<int> s(v.begin(),v.end());
    if(s.size()<n){
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