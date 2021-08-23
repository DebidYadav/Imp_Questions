#include<bits/stdc++.h>
using namespace std;

int Merge(vector<int>L,vector<int>R,vector<int>ar){
    int nL=L.size();
    int nR=R.size();
    int i=0,j=0,k=0;
    int inrevese_count=0;
    while(i<nL && j<nR){
        if(L[i]<=R[j]){
            ar[k]=L[i];
            i++;
        }
        else{
            ar[k]=R[j];
            inrevese_count+=((nL-1)-i);
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
        ar[k++]=R[j];
        j++;
        k++;
    }
    return inrevese_count;
}

int MergeSort(vector<int>ar){
    int inrverse_count=0;
    int n=ar.size();
    int L=0,R=n-1;
    int mid=n/2;
    vector<int>left(mid);
    vector<int>right(n-mid);
    for(int i=0;i<mid;i++){
        left[i]=ar[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=ar[i];
    }
    if(L<R){
        inrverse_count+=MergeSort(left);
        inrverse_count+=MergeSort(right);
        inrverse_count+=Merge(left,right,ar);
    }
    return inrverse_count;
}


int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans=MergeSort(ar);
    cout<<ans<<endl;
    return 0;
}