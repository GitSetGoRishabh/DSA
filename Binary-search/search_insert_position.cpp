#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n]={1,4,6,8,10,14,16,18};
    int key=7;
    int index=8;
    
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            index=mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
    }
    cout<<index;
}