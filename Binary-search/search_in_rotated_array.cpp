#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[6]={4,5,0,1,2,3};

    int start=0;
    int end=n-1;
    int mid;
    int key=2;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key) break;

        else if(arr[mid]>=arr[0]){
            if(arr[start]<=key && key<=arr[mid]){
                end=mid-1;
            }
            else start=mid+1;
        }
        else{
            if(arr[mid]<=key && key<=arr[end]){
                start=mid+1;
            }
            else end=mid-1;
        }
    }
    cout<<mid;
}