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
    sort(all(v));
    int mid = n/2;
    int s = 0, l = 0;
    for(int i=0;i<n;i++){
        if(v[i]<v[mid]){
            s++;
        }
        else if(v[i]>v[mid]){
            l++;
        }

    }
    cout<<max(l,s)<<endl;
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