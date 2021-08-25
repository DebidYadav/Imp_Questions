#include<bits/stdc++.h>
using namespace std;

void RotateMatrix(vector<vector<int>>&arr){
    int N=arr.size();
    for(int i=0;i<N/2;i++){
        for(int j=i;j<N-1-i;j++){
            swap(arr[i][j],arr[j][N-1-i]);
            swap(arr[j][N-1-i],arr[N-1-i][N-1-j]);
            swap(arr[N-1-i][N-1-j],arr[N-1-j][i]);
            //swap(arr[N-1-j][i],arr[i][j]);
        }
    }
}

int main(){
    int row,column;
    cin>>row>>column;
    vector<vector<int>>arr(row,vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    RotateMatrix(arr);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}