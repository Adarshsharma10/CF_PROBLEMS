#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

bool is_prime[1000001];

void prime(){
    for(int i=2;i<=1000000;i++){
        is_prime[i]=true;
    }
    for(int p=2;p*p<=1000000;p++){
        if(is_prime[p]){
            for(int i=p*p;i<=1000000;i+=p){
                is_prime[i]=false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prime();
    int n;
    cin >> n;
    bool flag = true;
    while (n--) {
        
        ll x;
        cin>>x;
        ll root = round(sqrt(x));

        if(x>1 && root <=1000000 && root*root==x && is_prime[root]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

// Successfully Submitted