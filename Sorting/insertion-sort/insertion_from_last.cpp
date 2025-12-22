#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,6,4,5,2};

    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
            else break;
        }
    }

    for(int i=0;i<n;i++){
            cout<<arr[i];
        }
}