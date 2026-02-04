/* intuition : we continously add cumulative sum of indices
until the sum becomes equal to the target 
if the sum becomes greater than the target sum then start 
reducing the leftmost elements.
*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,7,5};
    int target=12;

    int l=0;
    int sum=0;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(sum>target && l<=r){
            sum-=arr[l];
            l++;
        }
        if(sum==target){
            cout<<l+1<<" "<<r+1;
            break;
        } 
    }
}