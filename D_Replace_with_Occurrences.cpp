#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto &x : b){
        cin>>x;
    }
    
    vector<vector<int>> groups(n+1);
    for(int i=0;i<n;i++){
        groups[b[i]].push_back(i);
    }

    vector<int> ans(n);
    int element = 1;
    for(int k = 1;k<=n;k++){
        if(groups[k].empty()) continue;

        if(groups[k].size()%k!=0){
            cout<<-1<<endl;
            return;
        }

        for(int i=0;i<groups[k].size();i++){
            ans[groups[k][i]]=element;

            if(((i+1)+k)%k==0){
                element++;
            }
        }

    }

    
    for(auto y: ans){
        cout<<y<<" ";
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