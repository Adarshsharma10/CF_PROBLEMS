#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    double px,py,qx,qy;
    cin>>px>>py>>qx>>qy;
    vector<ll> a(n);
    for(auto &x : a){
        cin>>x;
    }
    ll max_side = *max_element(a.begin(),a.end());
    ll sum = accumulate(a.begin(),a.end(),0LL);
    double side = sqrt((px-qx)*(px-qx) + (py-qy)*(py-qy));
    
    double maxi_side = max(double(max_side),side);

    double total = sum + side;
    if(maxi_side <= total-maxi_side){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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