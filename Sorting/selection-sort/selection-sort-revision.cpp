#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[6]={8,2,4,3,9,1};
    

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

   for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}