#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int equal = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            equal++;
        }
    }
    if(equal>=3){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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