#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int totalwoods(vector<int>ar,int mid){
    int twood=0;
    for(int i=0;i<ar.size();i++){
        if(ar[i]>mid)
            twood+=ar[i]-mid;
    }
    return twood;
}

int treeheight(vector<int>ar,int n,int k){
    int low=0,high=ar[ar.size()-1];
    while(low<=high){
        int mid=(low+high)/2;
        int wood=totalwoods(ar,mid);
        if(wood==k)
            return mid;
        else if(wood<k)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    cout<<treeheight(ar,n,k);
    return 0;
}