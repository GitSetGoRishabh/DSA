#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,4,3,4,5,6};

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) continue;
        else{
            cout<<"NOT SORTED";
            break;
        }
    }

}