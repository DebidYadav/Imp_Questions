#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int carry=0;
    ar[n-1]++;
    carry=ar[n-1]/10;
    ar[n-1]=ar[n-1]%10;
    for(int i=n-2;i>=0;i--){
        if(carry!=0){
            ar[i]++;
            carry=ar[i]/10;
            ar[i]=ar[i]%10;
        }
    }
    if(carry==1)
        ar.insert(ar.begin(),1);
    for (int i = 0; i <ar.size(); i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}