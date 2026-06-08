#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini = *min_element(all(v));
    int maxi = *max_element(all(v));
    int mid = (maxi+mini)/2;
    cout<<max(abs(mid-maxi),abs(mid-mini))<<endl;


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

// Successfully SUbmitted