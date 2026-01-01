#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    int x = s[0];
    if(65<=x && 90>=x){
        cout<<s;
    }
    else{
        x-=32;
        s[0]=(char)x;
        cout<<s;
    }

    return 0;
}

// Successfully submitted