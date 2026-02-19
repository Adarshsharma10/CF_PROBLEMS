#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int cntl=0,cntr=1;
    s[0]='(';
    for(int i=1;i<n;i++){
        if(i&1){
            if(s[i]=='('){
                cntr++;
            }
            else{
                cntl++;
            }

            if(cntr==cntl){
                cntl=0;
                cntr=0;
            }
        }
        else{
            if(cntl==cntr){
                s[i]='(';
                cntr++;
            }
            else if(cntr>cntl){
                s[i]=')';
                cntr--;
            }
        }
    }

    vector<int> l;
    vector<int> r;
    for(int i=0;i<n;i++){
        if(s[i]==')'){
            l.push_back(i);
        }
        else{
            r.push_back(i);
        }
    }
    int ans=0;
    for(int i=0;i<n/2;i++){
        ans+=l[i]-r[i];
    }
    cout<<ans<<endl;
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