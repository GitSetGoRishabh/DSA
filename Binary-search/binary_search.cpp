#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[6]={2,4,5,7,9,11};
    int key=7;

    int start=0;
    int end=n-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<"Found at index "<<mid;
            break;
        }
        else if(arr[mid]>key) end=mid-1;
        else start=mid+1;
    }

}