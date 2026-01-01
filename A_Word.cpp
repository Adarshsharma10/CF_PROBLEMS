#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int cu=0,cl=0;
    for(int i=0;i<s.size();i++){
        if(65<=s[i] && s[i]<=90){
            cu++;
        }
        else{
            cl++;
        }
    }
    if(cu>cl){
        for(int i=0;i<s.size();i++){
            int x = s[i];
            if(97<=x && x<=122){
                x-=32;
                s[i]=char(x);
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            int x = s[i];
            if(65<=s[i] && s[i]<=90){
                x+=32;
                s[i]=char(x);
            }
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

    return 0;
}

// Successfully submitted