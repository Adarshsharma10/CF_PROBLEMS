#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int n = s.size();
    int ob=0,cb=0;
    vector<int> prefix;
    prefix.push_back(0);
    vector<int> posi;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            ob++;
        }
        else{
            cb++;
        }
        prefix.push_back(ob-cb);
        posi.push_back(i);
    }
    vector<pair<int,int>> ans;

    for (int i = 0; i < posi.size(); i++) {
        ans.push_back({posi[i], prefix[i]});
    }
    sort(ans.begin(), ans.end(),
    [](const pair<int,int>& a, const pair<int,int>& b) {
        if (a.second != b.second)
            return a.second < b.second;   // prefix ascending
        return a.first > b.first;         // position descending
    });

    for(auto x :ans){
        cout<<s[x.first];
    }cout<<endl;
    


    return 0;
}

// SUccessfully submitted