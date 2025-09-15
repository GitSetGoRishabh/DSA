#include<bits/stdc++.h>
using namespace std;
int reverseArray(int arr[],int i,int n){
    if(i>=n){
        return 0;
    }

    swap(arr[i],arr[n]);
    return reverseArray(arr,i+1,n-1);
}
int main(){
    int i=0;
    int n=5;
    int arr[n]={1,2,3,4,2};
    reverseArray(arr,i,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}