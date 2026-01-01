#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t,s;
    cin>>t;
    cin>>s;
    reverse(t.begin(),t.end());
    if(t==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

// Successfully submitted