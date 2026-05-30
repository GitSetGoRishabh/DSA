#include<bits/stdc++.h>
using namespace std;

void merge(arr1,arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    int n3=n1+n2;

    vector<int> arr3(n3);
    

    int i=0;
    int j=0;
    int k =0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n1){
        arr3[k++]=arr1[i++];
    }

    while(j<n2){
        arr3[k++]=arr2[j++];
    }

}

void mergeSort(int arr[], int start , int end){
    if(start>=end) return;
    int mid=((start+end)-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}


int main(){
    int a1[5]={1,3,5,7,9};
    int a2[5]={2,4,6,8,10};
}