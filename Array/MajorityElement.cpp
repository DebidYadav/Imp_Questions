#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm
int FindCandidate(vector<int>ar,int n){
    int count=1,index=0;
    for(int i=1;i<n;i++){
        if(ar[index]==ar[i]){
            count++;
        }
        else
            count--;
        if(count==0){
            index=i;
            count=1;
        }
    }
    return ar[index];
}

int IsMajority(vector<int>ar,int n,int candidate){
    int count=0;
    for(int i=0;i<n;i++){
        if(candidate==ar[i])
            count++;
    }
    if(count>n/2)
        return candidate;
    else
        return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int candidate=FindCandidate(ar,n);
    cout<<IsMajority(ar,n,candidate);
    return 0;
}