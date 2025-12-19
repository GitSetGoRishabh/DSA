#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={6,4,3,7,1};
    int n=5;
    for(int i=0;i<n-1;i++){
        int index=i;

        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]) index=j;
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
        
    }
}