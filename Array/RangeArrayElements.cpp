#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //using map
   /* map<int,int> mp;
    map<int,int> ::iterator itr;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" "<<itr->second<<" "<<endl;
    }*/


    // using array as hashmap
    vector<int> count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    for(int i=0;i<n;i++){
        cout<<count[i]<<" ";
    }

    /*for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]/n<<" ";
    }*/

    return 0;
}