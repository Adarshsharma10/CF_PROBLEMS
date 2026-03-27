#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

vector<pair<int,int>> prime_factor(int n){


    vector<pair<int,int>> res;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            res.push_back({i, cnt});
        }
    }

    if (n > 1) res.push_back({n, 1});

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    vector<pair<int,int>> ans=prime_factor(n);
    sort(ans.begin(),ans.end());
    int last;
    for(auto &x: ans){
        int f=x.first;
        if (!ans.empty()) {
            last = ans.back().first;
        }
        int s = x.second;
        for(int i=0;i<s;i++){
            if(f==last && i==s-1){
                cout<<f;
                return 0;
            }
            cout<<f<<"*";
        }

    }

    return 0;
}