#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x;
    cin>>x;
    string s= to_string(x);
    int msb = s[0]-'0';
    vector<ll> arr;
    while(x!=0){
        arr.push_back(x%10);
        x/=10;
    }
    if(arr.size()==1){
        cout<<0<<endl;
        return;
    }
    
    
    ll ans=0, sum=1;
    ll n = arr.size();
    if(msb==1){
        ans++;
    }
    
    bool flag= true;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==msb && flag){
            flag= false;
            continue;
        }
        if(sum+arr[i]<=9){
            ans++;
            sum+=arr[i];
        }
        else{
            break;
        }
    }
    if(9-(sum-1) >=msb && msb!=1){
        ans++;
    }
    cout<<n-ans<<endl;
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

}


// Successfully Submitted