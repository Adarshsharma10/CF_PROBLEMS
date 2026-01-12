#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,k;
    cin>>s;
    cin>>k;
    int n=s.length();
    string a,d;
    for(int i=0;i<n;i++){
        if(65<=s[i] && s[i]<=90){
            int c = s[i]+32;
            a.push_back(char(c));
        }
        else{
            a.push_back(s[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(65<=k[i] && k[i]<=90){
            int c = k[i]+32;
            d.push_back(char(c));
        }
        else{
            d.push_back(k[i]);
        }
    }
    if(a==d){
        cout<<0<<endl;
    }
    else if(a>d){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}

// Successfully Submitted