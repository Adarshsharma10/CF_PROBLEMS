#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<2<<" "<<1<<endl;
        return;
    }
    int element = n;
    vector<int> v(n,0);
    v[0]=3;
    v[n/2]=1;
    v[n-1]=2;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            while(v[i]==1 || v[i]==2 || v[i]==3){
                element--;
            }
            v[i]=element--;
        }
       
    }
    for(auto &x: v){
        cout<<x<<" ";
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