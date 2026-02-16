#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            lower[c - 'a']++;

        else if (c >= 'A' && c <= 'Z')
            upper[c - 'A']++;
    }
    int ans=0;

    for(int i=0;i<26;i++){
        int x=min(lower[i],upper[i]);
        ans+=x;
        lower[i]-=x;
        upper[i]-=x;
    }
    if(k==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<26;i++){
            int y=max(lower[i],upper[i]);
            int pairs=y/2;
            int move =min(pairs,k);
            ans+=move;
            k-=move;

            if(k==0){
                break;
            }
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