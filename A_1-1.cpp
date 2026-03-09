#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    for(int i=1;i<n-1;i++){
        if(s[i-1]=='1' && s[i+1]=='1'){
            s[i]='1';
        }
    }
    int cnt=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1'){
            i++;
            cnt++;
        }
    }
    int max_cnt = count(s.begin(),s.end(),'1');
    cout<<max_cnt-cnt<<" "<<max_cnt<<endl;
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