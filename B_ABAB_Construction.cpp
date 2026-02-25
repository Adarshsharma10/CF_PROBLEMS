#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    string t={};
    string l="ab";
    if(n&1){
        for(int i=1;i<=n/2;i++){
            t+=l;
        }
        t.push_back('a');
    }
    else{
        for(int i=1;i<=n/2;i++){
            t+=l;
        }
    }
    int left=0,right=n-1;
    for(int i=0;i<n;i++){
        if(s[i]==t[left]){
            left++;
        }
        else if(s[i]==t[right]){
            right--;
        }
        else if(s[i]=='?'){
            if(i==n-1 && s[n-1]=='?'){
                continue;
            }
            else if(s[i+1]==t[left]){
                right--;
            }
            else{
                left++;
            }
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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