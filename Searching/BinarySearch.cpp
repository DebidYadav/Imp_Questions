#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BinarySearch(int low,int high,vector<int>ar,int key){
    if(high<low)
        return low-1;
    int mid=(low+high)/2;
    if(key==ar[mid])
        return mid;
    else if(key<ar[mid])
        return BinarySearch(low,mid-1,ar,key);
    else
        return BinarySearch(mid+1,high,ar,key);
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int key;
    cin>>key;
    cout<<BinarySearch(0,n-1,ar,key);
    return 0;
}