#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    for(auto&p:v){
        cin>>p;
    }
    sort(all(v));
    int maxi = INT_MIN,mini = INT_MAX;
    for(int i=0;i<3;i++){
        maxi = max(maxi,v[i]);
        mini = min(mini,v[i]);
    }
   
    if(maxi-mini>=10){
        cout<<"check again"<<endl;
    }
    else{
        cout<<"final ";
        cout<<v[1]<<endl;
    }

    return 0;
}


// Successfully submitted