#include<bits/stdc++.h>
using namespace std;

int SerachFirst1(vector<int>ar,int low,int high){
    if(low<=high){
        int mid=(low+high)/2;
        if((mid==0 || ar[mid-1]==0) && ar[mid]==1)
            return mid;
        else if(ar[mid]==0)
            return SerachFirst1(ar,mid+1,high);
        else
            return SerachFirst1(ar,low,mid-1);
    }
    return -1;
}

int RowWithMax1s(vector<vector<int>>arr,int n,int m){
    int max1=-1,index,rowindex=-1;
    for(int i=0;i<n;i++){
        index=SerachFirst1(arr[i],0,m-1);
        if(index!=-1 && m-index>max1){
            max1=m-index;
            rowindex=i;
        }
    }
    return rowindex;
}

int main(){
    int row,column;
    cin>>row>>column;
    vector<vector<int>>arr(row,vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int ans=RowWithMax1s(arr,row,column);
    cout<<ans<<endl;
    return 0;
}