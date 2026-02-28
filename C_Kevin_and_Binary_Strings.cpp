#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    cout<<1<<" "<<n<<" ";
    int idx=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<1<<" "<<1<<endl;
        return;
    }
    int len = n-idx;
    string best="";
    int best_idx;

    for(int i=0;i<=idx;i++){
        string curr="";
        for(int j=0;j<len;j++){
            if(s[idx+j]==s[i+j]){
                curr+='0';
            }
            else{
                curr+='1';
            }
        }
        if(curr>best){
            best=curr;
            best_idx=i;
        }
    }
    cout<<best_idx+1<<" "<<best_idx+len<<endl;
    
    
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