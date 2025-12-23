#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[6]={11,8,7,5,4,2};
    int key=8;

    int start=0;
    int end=n-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;  // saves integer overflow
        if(arr[mid]==key){
            cout<<"Found at index "<<mid;
            break;
        }
        else if(arr[mid]<key) end=mid-1;
        else start=mid+1;
    }

}