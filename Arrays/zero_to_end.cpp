#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[6]={0,1,0,3,12};
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }

    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}