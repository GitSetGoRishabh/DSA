#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=7;
    int arr[7]={1,3,3,4,6,7,7};
    int key=7;
    int start=0;
    int end=n-1;
    int mid;
    int first=-1;
    int last=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(key==arr[mid]){
            first=mid;
            end=mid-1;
        }

        else if(arr[mid]>key){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
    }

    start=0;
    end=n-1;

    while(start<=end){
        mid=start+(end-start)/2;
        if(key==arr[mid]){
            last=mid;
            start=mid+1;
        }

        else if(arr[mid]>key){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
    }
    cout<<first<<endl<<last;
}