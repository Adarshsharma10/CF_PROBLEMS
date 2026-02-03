#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    vector<int> pos;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            pos.push_back(i+1);
        }
    }
    cout<<pos.size()<<endl;
    for(int i=0;i<pos.size();i++){
        cout<<pos[i]<<" ";
    }cout<<endl;
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