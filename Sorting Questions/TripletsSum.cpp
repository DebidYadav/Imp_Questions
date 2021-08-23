#include<bits/stdc++.h>
using namespace std;

int counttrip(vector<int>ar,int n,int val){
    int count=0;
    sort(ar.begin(),ar.end());
    for(int i=n-1;i>0;i--){
        int left=0,right=i-1;
        while(left<right){
            if(ar[left]+ar[right]+ar[i]>val){
                right--;
            }
            else{
                count+=right-left;
                left++;
            }
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
    int L,R;
    cin>>L>>R;
    int x=counttrip(ar,n,R)-counttrip(ar,n,L-1);
    cout<<x<<endl;
    return 0;
}