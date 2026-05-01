#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> mul3;
    vector<int> mul2;
    vector<int> d;

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%6==0){
            cout<<v[i]<<" ";
        }
        else if(v[i]%2==0){
            mul2.push_back(v[i]);
        }
        else if(v[i]%3==0){
            mul3.push_back(v[i]);
        }
        else{
            d.push_back(v[i]);
        }
    }
    for(int i=0;i<mul2.size();i++){
        cout<<mul2[i]<<" ";
    }
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    for(int i=0;i<mul3.size();i++){
        cout<<mul3[i]<<" ";
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