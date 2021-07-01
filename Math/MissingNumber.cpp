#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ar(n-1);
    for(int i=0;i<n-1;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int k=ar[0];
    for(int i=0;i<n-1;i++){
        if(ar[i]==k){
            k++;
            continue;
        }
        else
            break;
    }
    cout<<k<<"\n";
    return 0;
}