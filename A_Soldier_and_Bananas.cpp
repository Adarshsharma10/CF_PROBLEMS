#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n,w;
    cin>>k>>n>>w;
    int cost = 0;
    for(int i=1;i<=w;i++){
        cost+=i*k;
    }
    if(cost<=n){
        cout<<0<<endl;
    }
    else{
        cout<<abs(n-cost)<<endl;
    }
    return 0;
}

//Successfully submitted