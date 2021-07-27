#include<bits/stdc++.h>
using namespace std;

/*void Rearrange(int ar[],int n){
    int j=-1;
    for(int i=1;i<n;i++){
        if(ar[i]<0){
            j++;
            swap(ar[j],ar[i]);
        }
    }
    int negative=0,positive=j+1;
    while(negative<positive && positive<n && ar[negative]<0){
        swap(ar[negative],ar[positive]);
        negative+=2;
        positive++;
    }
}*/


int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>br;    
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int pos=0,start=0;
    for(int i=0;i<n;i++){
        if(ar[i]<0){
            br.push_back(ar[i]);
        }
    }
    pos=br.size();
    for(int i=0;i<n;i++){
        if(ar[i]>=0)
            br.push_back(ar[i]);
    }
    while(start<pos && pos<n && br[start]<0){
        swap(br[start],br[pos]);
        start+=2;
        pos++;
    }
    for(int i=0;i<n;i++){
        cout<<br[i]<<" ";
    }
    return 0;
}