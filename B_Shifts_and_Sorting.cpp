#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

// void substringshift(string &s,int l,int r){
//     char last=s[r];
//     for(int i=r;i>l;i--){
//         s[i]=s[i-1];
//     }
//     s[l]=last;

// }

// void solve() {
//     string s;
//     cin>>s;
//     int ans=0;
//     int n = s.size();
//     if(is_sorted(s.begin(),s.end())){
//         cout<<0<<endl;
//         return;
//     }
//     for(int l=0;l<n;l++){
//         if(s[l]=='1'){
//             for(int r=l+1;r<n;r++){
//                 if(s[r]=='0'){
//                     substringshift(s,l,r);
//                     // cout<<"String "<<s<<endl;
//                     ans+=(r-l+1);
//                     // cout<<"ANS "<<ans<<endl;
//                     if(is_sorted(s.begin(),s.end())){
//                         cout<<ans<<endl;
//                         return;
//                     }
//                 }
//             }
//         }
//     }
    
// }

void solve() {
    string s;
    cin >> s;

    long long ans = 0;
    long long ones = 0;

    for (char c : s) {
        if (c == '1') {
            ones++;
        } else {
            if (ones > 0) {
                ans += ones + 1;
            }
        }
    }

    cout << ans << '\n';
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

// Successfully submitted


