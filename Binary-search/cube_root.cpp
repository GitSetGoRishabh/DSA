#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=30;
    int start=0;
    int end=n;
    long long mid;
    int ans;
        
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid*mid>n){
            end=mid-1;
        }
        else {
            ans=mid;
            start=mid+1;
        }
    }
    cout<<ans;
}