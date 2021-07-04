#include<bits/stdc++.h>
using namespace std;

string FractionToDecimal(int numerator,int denominator){
    if(numerator==0)
        return 0;
    int sign=(numerator<0)^(denominator<0)?-1:1;
    numerator=abs(numerator);
    denominator=abs(denominator);
    string s;
    if(sign==-1)
        s+="-";
    int initial=numerator/denominator;
    s+=to_string(initial);
    if(numerator%denominator==0)
        return s;
    s+=".";
    int rem=numerator%denominator;
    int index;
    bool repeating=false;
    map<int,int>mp;
    while(rem>0 && !repeating){
        if(mp.find(rem)!=mp.end()){
            index=mp[rem];
            repeating=true;
            break;
        }
        else{
            mp[rem]=s.size();
        }
        rem=rem*10;
        int temp=rem/denominator;
        s+=to_string(temp);
        rem=rem%denominator;
    }
    if(repeating){
        s+=")";
        s=s.insert(index,"(");
    }
    return s;
}

 int main(){
     int numerator,denominator;
     cin>>numerator>>denominator;
     cout<<FractionToDecimal(numerator,denominator)<<endl;
     return 0;
 }