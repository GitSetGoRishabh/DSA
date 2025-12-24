#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int start=1;
    int end=10;
    int mid;
    int ans;

    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }

    cout<<ans;
}