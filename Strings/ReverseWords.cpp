#include<bits/stdc++.h>
using namespace std;

string ReverseWords(string S){
    vector<string>str;
    string s= "";
    for(int i=0;i<S.size();i++){
        if(S[i]=='.'){
            str.push_back(s);
            s="";
        }
        else
            s=s+S[i];
    }
    str.push_back(s);
    string ss;
    for(int i=str.size()-1;i>0;i--){
        ss+=str[i];
        ss+=".";
    }
    ss+=str[0];
    return ss;
}

int main(){
    string s;
    cin>>s;
    cout<<ReverseWords(s);
    return 0;
}