#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin>>x;
    set<int> prev,total;
    int cnt=0;
    for(int i=0;i<n;i++){
        total.insert(a[i]);
        if(prev.count(a[i])){
            prev.erase(a[i]);
        }
        if(prev.size()==0){
            cnt++;
            prev=total;
        }
    }
    cout<<cnt<<'\n';
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