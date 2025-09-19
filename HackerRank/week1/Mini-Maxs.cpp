#include<bits/stdc++.h>
using namespace std;

void MiniMaxSum(vector<int>arr){
    long long total=0;
    int Maxs=arr[0];
    int Mini=arr[0];

    for(int i =0; i < arr.size();i++){
        total=total+arr[i];   
    }

    for (int i=1;i<arr.size();i++){  
        if(arr[i]>Mini){
            Mini=arr[i];
        }
        if(arr[i]<Maxs){
            Maxs=arr[i];
        }
    } 

    long long  MaxSum=total-Mini;
    long long MinSum=total-Maxs;

    cout<<MinSum<<" "<<MaxSum;
}
