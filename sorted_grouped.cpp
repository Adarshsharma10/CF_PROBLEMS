#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> pos;
        vector<char> ans;
        char prev ='a';
        for(int i=0;i<n;i++){
            if(prev<=s[i]){
                prev=s[i];
            }
            else{
                pos.push_back(i);
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int idx=0;
        for(int i=0;i<n;i++){
            if( idx<ans.size() && pos[idx]==i ){
                s[i]=ans[idx];
                idx++;
            }
        }
        cout<<s<<endl;
    }

}

// Successfully Submitted