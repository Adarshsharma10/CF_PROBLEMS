#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}

// Successfully submitted