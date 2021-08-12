#include<bits/stdc++.h>
using namespace std;

//two pointer method
int NofTri(vector<int>ar,int n){
    sort(ar.begin(),ar.end());
    int count=0;
    for(int i=n-1;i>0;i--){
        int left=0,right=i-1;
        while(left<right){
            if(ar[left]+ar[right]>ar[i]){
                count+=right-left;
                right--;
            }
            else
                left++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int count=0;
    for(int i=0;i<n-2;i++){
        int k=i+2;
        for(int j=i+1;j<n;j++){
            while(k<n && ar[i]+ar[j]>ar[k]){
                k++;
            }
            if(k>j)
                count+=k-j-1;
        }
    }
    cout<<count<<endl;
    cout<<NofTri(ar,n)<<endl;
    return 0;
}