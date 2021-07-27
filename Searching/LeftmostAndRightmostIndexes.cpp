#include<bits/stdc++.h>
using namespace std;
int first(vector<long long>v,int low,int high,int x,int n){
    if(high>=low){
        int mid=(low+high)/2;
        if((mid==0 || x>v[mid-1]) && v[mid]==x)
            return mid;
        else if(x>v[mid])
            return first(v,(mid+1),high,x,n);
        else
            return first(v,low,(mid-1),x,n);
    }
    return -1;
}

int last(vector<long long>v,int low,int high,int x,int n){
    if(high>=low){
        int mid=(low+high)/2;
        if((mid==n-1 || x<v[mid+1]) && v[mid]==x)
            return mid;
        else if(x<v[mid])
            return last(v,low,mid-1,x,n);
        else
            return last(v,mid+1,high,x,n);
    }
    return -1;
}
pair<long,long> indexes(vector<long long> v, long long x){
    pair<int,int>p;
    p.first=first(v,0,v.size()-1,x,v.size());
    p.second=last(v,0,v.size()-1,x,v.size());
    return p;
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    pair<int,int> pm=indexes(v,x);
    cout<<pm.first<<" "<<pm.second;
    return 0;
}