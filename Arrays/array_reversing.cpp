#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5/2;i++){
        swap(arr[i],arr[5-i-1]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

    int arr2[5]={6,7,8,9,10};

    int j=0;
    int k=5;
    while(j<k){
        swap(arr2[j],arr2[k]);
        j++;
        k--;
    }

    for(int i=0;i<5;i++){
        cout<<arr2[i];
    }    
}