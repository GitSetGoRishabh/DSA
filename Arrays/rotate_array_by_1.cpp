#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,3,6,7,4};
    int temp = arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}