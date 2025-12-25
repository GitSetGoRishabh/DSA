#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[7]= {2,4,6,8,10,8,5};

    int start=0;
    int end=n-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            break;
        }

        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<mid;
}