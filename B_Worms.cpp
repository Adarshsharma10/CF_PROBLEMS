#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

int binary(vector<int> &sum,int target){
    int n = sum.size();
    int s = 0;
    int e = n-1;
    int ans=0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(target<=sum[mid]){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >>n;
    vector<int> worms(n);
    for(auto &x : worms){
        cin>>x;
    }
    vector<int> sum(n);
    sum[0]=worms[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+worms[i];
    }
    int m;
    cin>>m;
    vector<int> juicy(m);
    for(auto &x : juicy){
        cin>>x;
    }
    sort(sum.begin(),sum.end());

    for(int i=0;i<m;i++){
        int res = binary(sum,juicy[i]);
        cout<<res+1<<endl;
    }


    return 0;
}

// Successfully Submitted