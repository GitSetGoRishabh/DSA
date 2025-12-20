#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,4,3,1,8};
    int n=5;

    for(int i=n-1;i>0;i--){
        int swapped=0;
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swapped=1;
                swap(arr[j],arr[j-1]);
            }
        }
        if(swapped==0) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}