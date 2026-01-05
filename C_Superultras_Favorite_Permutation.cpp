#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool isComposite(int n) {
    if (n <= 1) return false;  

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return true;     
    }
    return false;             
}


void solve() {
    int n;
    cin >> n;
    if(n<=3){
        cout<<-1<<endl;
        return;
    }
    vector<int> ans;
    int s=-1;
    for(int i=1;i<=n;i+=2){
        if(i&1){
            ans.push_back(i);
        }
    }
    for(int i=2;i<=n;i+=2){
        if(n&1){
            if(isComposite(n+i)){
                s = i;
                break;
            }
        }
        else{
            if(isComposite(n-1+i)){
                s = i;
                break;
            }
        }
    }
    if(s==-1){
        cout<<-1<<endl;
        return;
    }
    ans.push_back(s);
    for(int i=2;i<=n;i+=2){
        if(i!=s){
            ans.push_back(i);
        }
    }

    if ((int)ans.size() != n) {
        cout << -1 << '\n';
        return;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
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