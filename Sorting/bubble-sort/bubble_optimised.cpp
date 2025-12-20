#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,4,3,1,8};
    int n=5;

    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}