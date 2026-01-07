#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v){
        cin>>x;
    }
    int cnt=0;

    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    for(auto &x: freq){
        if(x.second>=2){
            cnt++;
        }
    }
    if(cnt<2){
        cout<<-1<<endl;
        return;
    }
    int s=0;
    vector<int> b(n,1);
    for(int i=0;i<n;i++){
        if(freq[v[i]]>=2){
            b[i]=1;
            for(int k=i+1;k<n;k++){
                if(v[k]==v[i]){
                    if(s==0){
                        b[k]=2;
                    }
                    else{
                        b[k]=3;
                    }
                    s++;
                    freq[v[i]]=0;
                    break;
                }
            }
            if(s==2){
                break;
            }
        }
    }
    for(auto &x : b){
        cout<<x<<" ";
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