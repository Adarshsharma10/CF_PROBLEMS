#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    bool flag=false;
    int cntz=0;
    for(auto &x : v){
        cin>>x;
        if(x==0){
            cntz++;
            flag=true;
        }
    }

    // -----> LOGIC


    if(!flag){    //When no zero in the array
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    
    int cnt=0;
    bool first =false,second = false;
        for(int i=0;i<n/2;i++){
            if(v[i]==0){
                cnt+=2;
                first=true;
                break;
            }
        }
        for(int i=n/2;i<n;i++){
            if(v[i]==0){
                cnt+=2;
                second =true;
                break;
            }
        }

    



    if(cnt==4){
        cout<<3<<endl;
        if(n&1){
            cout<<1<<" "<<n/2<<endl;
            cout<<2<<" "<<n/2+2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else{
            cout<<1<<" "<<n/2<<endl;
            cout<<2<<" "<<n/2+1<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
    else{
        cout<<2<<endl;
        if(first){
            if(n&1){
                cout<<1<<" "<<n/2<<endl;
                cout<<1<<" "<<n/2+2<<endl;
            }
            else{
                cout<<1<<" "<<n/2<<endl;
                cout<<1<<" "<<n/2+1<<endl;
            }
        }
        else if(second){
            cout<<n/2+1<<" "<<n<<endl;
            cout<<1<<" "<<n/2+1<<endl;
        }
    }

    
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