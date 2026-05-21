#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
}

void insertionSort2(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n=6;
    
    int arr[6]={3,2,8,9,7,10};
    int arr2[6]={3,2,10,8,9,7};
    
    insertionSort(arr,n);
    insertionSort2(arr2,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}