#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>>x;
    if(x<=5) cout<<1<<endl;
    else{
        if(x%5==0){
            cout<<x/5<<endl;
        }
        else{
            cout<<x/5+1<<endl;
        }
    }

    return 0;
}

// successfully submitted