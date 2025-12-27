#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[n]={0,0,1,1,1,2,2,3,3,4};

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1;
}