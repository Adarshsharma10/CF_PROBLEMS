#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    
   
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

  
    ll ans1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i]){
            ans1 += a[i] - b[i];
        } else {
            ans1 = 2e18;
            break;
        }
    }


    sort(all(a));
    sort(all(b));

    long long ans2 = c; 
    bool possible2 = true;
    
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            possible2 = false;
            break;
        } else {
            ans2 += a[i] - b[i];
        }
    }

    ll final_ans = 2e18;
    if (ans1 != 2e18) final_ans = min(final_ans, ans1);
    if (possible2) final_ans = min(final_ans, ans2);

    if (final_ans == 2e18) {
        cout << -1 << "\n";
    } else {
        cout << final_ans << "\n";
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