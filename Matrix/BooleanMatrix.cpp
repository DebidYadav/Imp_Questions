#include<bits/stdc++.h>
using namespace std;

void BooleanMatrix(vector<vector<int>>&arr){
    int row=arr.size();
    int column=arr[0].size();
    vector<int>R(row,0);
    vector<int>C(column,0);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==1){
                R[i]=1;
                C[j]=1;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(R[i]==1 || C[j]==1)
                arr[i][j]=1;
        }
    }
}

int main(){
    int row,column;
    cin>>row>>column;
    vector<vector<int>>arr;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    BooleanMatrix(arr);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}