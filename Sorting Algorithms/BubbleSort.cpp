#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BubbleSort(vector<int>&ar,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1])
                swap(ar[j],ar[j+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    BubbleSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}