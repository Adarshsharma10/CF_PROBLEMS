#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    int ans = 0;
    int limak = a;
    int bob = b;
    for(int i=0;i<10;i++){
        limak*=3;
        bob*=2;
        if(limak>bob){
            ans++;
            cout<<ans<<endl;
            break;
        }
        else{
            ans++;
        }
    }
    return 0;
}

// Successfully accepted