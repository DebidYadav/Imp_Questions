#include<bits/stdc++.h>
using namespace std;


// To find out number of 0s we have to just find out the number of 5s in the n
// numbers like 28 must be checked for multiple of 5 
// for example when n=5, no of 5s=1,so trailing 0s=1
// n=10, (2*5) i.e. 10/5=2 so traiiling 0s=2
// general formula = (n/5)+(n/25)+(n/125)+......

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=5;n/i>0;i*=5){
        count+=n/i;
    }
    cout<<count<<endl;
    return 0;
}