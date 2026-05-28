#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

ll sol(ll val, vector<ll> &arr){
    int n = arr.size();
    ll total_steps = 0;

    for(int i=0;i<n;i++){
        ll num = arr[i];
        int flag=1;
    ll steps = 0;
    int one = 2;
    while(num!=val && one){
        steps++;
        if(num%2==1){
            if(num==1){
                one--;
            }
            num+=1;
        }
        else{
            num/=2;
        }
    }
    if(num!=val){
        flag=0;
    }
    if(!flag){
        return 2e18;
    }
    total_steps+=steps;
    }
    return total_steps;

}


void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    ll val = v[0];
    ll mini = sol(val,v);
    if(val&1){
        val++;
    }
    while(val!=1){
        ll res = sol(val,v);
        mini = min(mini,res);
        if(val&1){
            val+=1;
        }
        else{
            val/=2;
        }
    }
    cout<<mini<<endl;

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