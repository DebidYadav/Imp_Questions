#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Merge(vector<int>L,vector<int>R,vector<int>&ar){
    int nL=L.size();
    int nR=R.size();
    int i=0,j=0,k=0;
    while(i<nL && j<nR){
        if(L[i]<=R[j]){
            ar[k]=L[i];
            i++;
        }
        else{
            ar[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<nL){
        ar[k]=L[i];
        i++;
        k++;
    }
    while(j<nR){
        ar[k]=R[j];
        j++;
        k++;
    }
}

void MergeSort(vector<int>&ar){
    int n=ar.size();
    if(n<2)
        return;
    int mid=n/2;
    vector<int>left(mid);
    vector<int>right(n-mid);
    for(int i=0;i<mid;i++){
        left[i]=ar[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=ar[i];
    }
    MergeSort(left);
    MergeSort(right);
    Merge(left,right,ar);
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    MergeSort(ar);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}