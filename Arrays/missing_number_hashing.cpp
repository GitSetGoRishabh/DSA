#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int arr[n]={1,2,4,5};

    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[i]=arr[i];
    }

    for(int i=0;i<=n;i++){
        if(hash[i]==0){
            cout<<i-1;
            break;
        }
    }
}