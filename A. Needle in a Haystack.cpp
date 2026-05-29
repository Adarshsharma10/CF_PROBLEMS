#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
   
    string s,t;
    cin>>s;
    cin>>t;
    vector<int> h_s(26,0);
    vector<int> h_t(26,0);
    for(auto &x : s){
        h_s[x - 'a']++;
    }
    for(auto &y : t){
        h_t[y - 'a']++;
    }

    vector<int> left(26,0);
    for(int i=0;i<26;i++){
        if(h_s[i]>h_t[i]){
            cout<<"Impossible"<<endl;
            return;
        }
        left[i]=h_t[i]-h_s[i];
    }

    string ans="";
    for(char reqchar : s){
        int req_idx = reqchar-'a';
        for (int i = 0; i < req_idx; i++) {
            while (left[i] > 0) {
                ans += (char)('a' + i);
                left[i]--;
            }
        }
        ans += reqchar;

    }
    for (int i = 0; i < 26; i++) {
        while (left[i] > 0) {
            ans += (char)('a' + i);
            left[i]--;
        }
    }

    cout << ans << endl;

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