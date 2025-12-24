#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={1,3,5,5,5,6,8};
    int key=5;
    int start=0;
    int end=n-1;
    int mid;
    int first=-1;
    int last=-1;
        
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else start=mid+1;
    }
        
    start=0;
    end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else start=mid+1;
    }
        
    if(first==-1 && last==-1) cout<<0;
    else cout<<last-first+1;
}