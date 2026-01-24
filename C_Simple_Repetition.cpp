#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool isPrime(long long ans) {
    if (ans <= 1) return false;
    for (long long i = 2; i * i <= ans; i++) {
        if (ans % i == 0)
            return false;
    }
    return true;
}


void solve() {
    string x;
    int k;
    cin>>x>>k;


    if(k>1){
        if(x=="1" && k==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    
    ll ans = stoll(x);
    if (isPrime(ans))
        cout << "YES\n";
    else
        cout << "NO\n";

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