#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int sum1=0,sum2=0;
    int i=0;
    while(n!=0){
        if(i>2){
            sum2+=(n%10);
            n=n/10;
        }
        else{
            sum1+=(n%10);
            n=n/10;
        }
        i++;
    }
    if(sum1==sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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