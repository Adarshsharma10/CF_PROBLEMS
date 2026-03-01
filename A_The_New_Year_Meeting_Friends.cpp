#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    vector<int> v(3);
    for(auto &x : v){
        cin>>x;
    }
    sort(all(v));
    cout<<abs(v[2]-v[0]);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// Successfully Submitted