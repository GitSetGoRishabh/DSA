#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5]={3,4,5,1,2};
    int start=0;
    int end=n-1;
    int mid,index;

    while(start<=end){
        mid=end+(start-end)/2;
        if(arr[mid]>=arr[0]) start=mid+1;
        else{
            index=mid;
            end=mid-1;
        }
    }
    cout<<index;

}