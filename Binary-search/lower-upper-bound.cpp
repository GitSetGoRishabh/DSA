#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[6]={1,2,5,7,8,9};

    int low=0;
    int high=5;
    int mid;
    int key=6;
    int ans=arr[5];

    while(low<=high){
        mid=low+(high-low)/2;

        if(arr[mid]>=key){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<arr[ans]<<endl;
    
    ans=-1;
    low=0;
    high=5;

    while(low<=high){
        mid=low+(high-low)/2;

        if(arr[mid]<=key){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<arr[ans]<<endl;
}