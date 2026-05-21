#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={3,8,2,9,10,7};
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}