#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(b) (b).begin(), (b).end()

void solve() {
    int n,m,q;
    cin >>n>>m>>q;

    vector<int> b(2);
    int a[1];
    cin>>b[0]>>b[1];
    cin>>a[0];
    sort(all(b));


    if(a[0]<b[0]){
       cout<<b[0]-1<<endl;
    }
    else if(a[0]>b[1]){
       cout<<n-b[1]<<endl;
    }
    else{
        int x=a[0]-b[0];
        int y=b[1]-a[0];
        cout<<(x+y)/2<<endl;
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