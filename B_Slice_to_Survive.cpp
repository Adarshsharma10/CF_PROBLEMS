#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    int x1,x2,x3,x4;
    x1=ceil(log2((double)n));
    x2=ceil(log2((double)m));
    x3=ceil(log2((double)min(a,n-a+1)));
    x4=ceil(log2((double)min(b,m-b+1)));

    cout<<min(x1+x4,x2+x3)+1<<endl;

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