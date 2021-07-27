#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    int n;
    cin>>n;
    vector<ll> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<long long int>left(n);
    vector<long long int>right(n);
    vector<long long int>p(n,1);
    if(n==1)
        cout<<"1"<<endl;
    else{
        left[0]=ar[0];
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*ar[i];
        }
        right[n-1]=ar[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*ar[i];
        }
        p[0]=right[1];
        p[n-1]=left[n-2];
        for(int i=1;i<n-1;i++){
            p[i]=left[i-1]*right[i+1];
        }
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }
    }
    return 0;
}