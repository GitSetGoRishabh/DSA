#include<bits/stdc++.h>
using namespace std;
int main(){
    int l=0;
    int r=0;
    int arr[7]={1,2,3,1,1,1,0};
    int n=7;
    int sum=arr[0];
    int maxlen=0;
    int k;
    cin>>k;
    
    while(r<n){
        while(l<=r && sum > k) {
            sum-=arr[l];
            l++;
        }
        if(sum==k){
            maxlen=max(maxlen,r-l+1);
        }

        r++;

        if(r<n) sum+=arr[r];
    }

    cout<<maxlen;
}