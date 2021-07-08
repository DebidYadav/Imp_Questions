#include<bits/stdc++.h>
using namespace std;

void rev(int ar[],int start,int end){
    while(start<end){
        int temp=ar[start];
        ar[start]=ar[end];
        ar[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int n,d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    d=d%n;
    rev(ar,0,d);
    rev(ar,d+1,n-1);
    rev(ar,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}