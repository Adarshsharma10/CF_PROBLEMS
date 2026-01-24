#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    int maxi =0;
    int cnt_mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]>maxi){
                maxi=v[i][j];
                cnt_mx=1;
            }
            else if(v[i][j]==maxi){
                cnt_mx++;
            }

        }
    }
    vector<int> r(n),c(m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==maxi){
                r[i]++;
                c[j]++;
            }
        }
    }

    int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (r[i] + c[j] - (v[i][j] == maxi) == cnt_mx) {
                    flag = 1;
                }
            }
        }
    cout << maxi - flag << '\n';


    
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