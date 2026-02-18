#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(b) (b).begin(), (b).end()

void solve() {
    int n,m,q;
    cin >>n>>m>>q;
    vector<int> b(m);
    vector<int> a(q);
    for(auto &x: b){
        cin>>x;
    }
    for(auto &x: a){
        cin>>x;
    }
    sort(all(b));


    for(int i=0;i<q;i++){
        if(a[i]<b[0]){
            cout<<b[0]-1<<endl;
        }
        else if(a[i]>b[m-1]){
            cout<<n-b[m-1]<<endl;
        }
        else{
            auto pos = lower_bound(b.begin(),b.end(),a[i]);
            int idx1 = pos-b.begin();
            int idx2 = idx1-1;
            int x=a[i]-b[idx2];
            int y=b[idx1]-a[i];
            cout<<(x+y)/2<<endl;
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

// Successfully Submitted