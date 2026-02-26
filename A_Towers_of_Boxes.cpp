#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m,d;
    cin >>n>>m>>d;
    if(m==d){
        if(n&1){
            cout<<n/2+1<<endl;
        }
        else{
            cout<<n/2<<endl;
        }
    }
    else if(m>d){
        cout<<n<<endl;
    }
    else{
        int cal=d/m;
        cal++;
        if(n%cal==0){
            cout<<n/cal<<endl;
        }
        else{
            cout<<n/cal+1<<endl;
        }
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