#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    if(n&1){
        cout<<n/2-n<<endl;
    }
    else{
        cout<<n/2<<endl;

    }

    return 0;
}

// Successfully Submitted