#include<bits/stdc++.h>
using namespace std;

int MaxIndex(vector<int>ar,int n){
    vector<int> maxfromend(n+1,INT_MIN);
    for(int i=n-1;i>=0;i--){
        maxfromend[i] = max(maxfromend[i+1],ar[i]);
    }
    int res=0;
    for(int i=0;i<n;i++){
        int low=i+1,high=n-1,ans=i;
            while(low<=high){
                int mid=(low+high)/2;
                if(ar[i]<=maxfromend[mid]){
                    ans=max(ans,mid);
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            res=max(res,ans-i);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<MaxIndex(ar,n)<<endl;
    return 0;
}