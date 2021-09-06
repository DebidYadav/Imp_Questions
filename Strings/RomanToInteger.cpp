#include<iostream>
#include<map>
using namespace std;

int romanToDecimal(string &str){
    map<char,int>mp;
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});
    int value=0;
    for(int i=0;i<str.size();i++){
        if(mp[str[i]]<mp[str[i+1]]){
            value+=mp[str[i+1]]-mp[str[i]];
            continue;
        }
        value+=mp[str[i]];
    }
    return value;
}

int main(){
    string s;
    cin>>s;
    cout<<romanToDecimal(s);
    return 0;
}