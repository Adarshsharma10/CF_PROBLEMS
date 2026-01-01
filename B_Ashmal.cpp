#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    int k;
    for(k=0;k<n;k++){
        cin>>a[k];
    }
    string s=a[0];
    for(int j = 1; j < n; j++){
        if (a[j] + s < s + a[j]){
            s = a[j] + s;
        }
        else{
            s = s + a[j];
        }
    }
    cout<<s<<endl;


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