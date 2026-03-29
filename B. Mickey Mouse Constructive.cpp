#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int x,y;
    cin>>x>>y;
    int p = x;
    int n = -1*y;
    int sum = p+n;
    int partition =1;
    for(int i=2;i<=abs(sum);i++){
        if(sum%i==0){
            if(sum==0 && x+y<=i){
                continue;
            }

            partition++;
        }
    }
    cout<<partition<<endl;
    for(int i=0;i<x;i++){
        cout<<1<<" ";
    }
    for(int i=0;i<y;i++){
        cout<<-1<<" ";
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

