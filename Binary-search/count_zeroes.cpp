#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=5;
    int arr[5]={1,1,1,0,0};
    int start=0;
    int end=n-1;
    int mid;
    int first=0;
        
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==0){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]>0){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<n-first;
}
    