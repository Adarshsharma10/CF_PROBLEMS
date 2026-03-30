#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    set<int> s(v.begin(),v.end());
    cout<<4-s.size();
    return 0;
}