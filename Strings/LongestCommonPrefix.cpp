#include<bits/stdc++.h>
using namespace std;

string commonprefix(string s1,string s2){
    string str;
    for(int i=0,j=0;i<s1.size(),j<s2.size();i++,j++){
        if(s1[i]==s2[j]){
            str+=s1[i];
        }
        else
            break;
    }
    return str;
}

string longestcommonprefix(string arr[],int N){
    string res=arr[0];
    for(int i=1;i<N;i++){
        res=commonprefix(res,arr[i]);
    }
    if(res=="")
        return "-1";
    else
        return res;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestcommonprefix(arr,n)<<endl;
    return 0;
}