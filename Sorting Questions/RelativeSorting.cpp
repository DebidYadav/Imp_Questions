#include<bits/stdc++.h>
using namespace std;

vector<int> RelativeSort(vector<int>A1,vector<int>A2,int n,int m){
    vector<int>temp(n);
    map<int,int>mp;
    int ind=0;
    for(int i=0;i<n;i++){
        mp[A1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp[A2[i]!=0]){
            for(int j=1;j<=mp[A2[i]];j++){
                temp[ind++]=A2[i];
            }
        }
        mp.erase(A2[i]);
    }
    for(auto it:mp){
        for(int j=1;j<=it.second;j++){
            temp[ind++]=it.first;
        }
    }
    return temp;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>A1[n];
    vector<int>A2[m];
    for(int i=0;i<n;i++){
        cin>>A1[i];
    }
    for(int i=0;i<m;i++){
        cin>>A2[i];
    }
    A1=RelativeSort(A1,A2,n,m);
    return 0;
}