#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i&1){
            if(i>1){
                cout<<"that ";
            }
            cout<<"I hate ";
        }
        else{
            cout<<"that ";
            cout<<"I love ";
        }
    }cout<<"it";

    return 0;
}

// Successfully Submitted