#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    vector<int> v(n);
    for(auto &x: v){
        cin>>x;
    }
    int first = v[0];
    int cf = 0,cs = 0;
    int idxf;
    int second = v[n-1];
    bool flag1 =false,flag2=false;
    for(int i=0;i<n;i++){
        if(v[i]==first){
            cf++;
            idxf=i;
            if(cf==k){
                flag1=true;
                break;
            }
        }
        
            
    }
    if(first == second){
        idxf=0;
    }
    for(int i=idxf;i<n;i++){
        if(v[i]==second){
            cs++;
            if(cs==k){
                flag2=true;
                break;
            }
        }
    }
    if(flag1 && flag2){
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