#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin>>a;
    cin>>b;
    int cnto=0,cnte=0;
    for(int i=0;i<n;i++){
        if(i&1){
            if(b[i]=='0'){
                cnto++;
            }
        }
        else{
            if(b[i]=='0'){
                cnte++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i&1){
                if(cnte>0){
                    cnte--;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else{
                if(cnto>0){
                    cnto--;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
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