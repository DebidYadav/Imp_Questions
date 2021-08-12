#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SelectionSort(vector<int>&ar,int n){
    for(int i=0;i<n-1;i++){
        int imin=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[imin])
                imin=j;
        }
        swap(ar[i],ar[imin]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    SelectionSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}