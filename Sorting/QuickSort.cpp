#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Partition(vector<int>&ar,int start,int end){
    int pivot=ar[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(ar[i]<=pivot){
            swap(ar[i],ar[pIndex]);
            pIndex++;
        }
    }
    swap(ar[pIndex],ar[end]);
    return pIndex;
}

void QuickSort(vector<int>&ar,int start,int end){
    if(start<end){
        int pIndex=Partition(ar,start,end);
        QuickSort(ar,start,pIndex-1);
        QuickSort(ar,pIndex+1,end);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    QuickSort(ar,0,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}