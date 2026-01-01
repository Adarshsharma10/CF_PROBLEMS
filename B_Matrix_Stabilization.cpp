#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool flag=true;
            bool hasneigh=false;
            int main = v[i][j];
            int dx[4]={1,0,-1,0};
            int dy[4]={0,1,0,-1};
            ll larg = LLONG_MIN;

            for(int d=0;d<4;d++){
                int ni=i+dx[d];
                int nj=j+dy[d];

                if(ni>=0 && ni<n && nj>=0 && nj<m){
                    hasneigh=true;
                    ll val = v[ni][nj];
                    if(main<=val){
                        flag=false;
                        break;
                    }
                    else{
                        larg=max(larg,val);
                    }
                }
            }

            if(flag&&hasneigh){
                v[i][j]=larg;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
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