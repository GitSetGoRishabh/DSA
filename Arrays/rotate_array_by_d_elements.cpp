#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[7]={1,2,3,4,5,6,7};
    int k=3;

    int n = 7;
    k=k%n;
    int arr[100000];
    int j=0;
    for(int i=n-k;i<n;i++){
        arr[j]=nums[i];
        j++;
    }
    j=n-1;
    for(int i=n-k-1;i>=0;i--){
        nums[j]=nums[i];
        j--;
    }
    for(int i=0;i<k;i++){
        nums[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
}

        