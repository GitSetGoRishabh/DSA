#include<bits/stdc++.h>
using namespace std;

int main(){
    int largest = INT_MIN;
    int arr[6]={1,5,7,4,2,8};
    for(int i=0;i<6;i++){
        if(largest<arr[i]) largest=arr[i];
    }
    int secondLargest=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]!=largest) secondLargest=max(arr[i],secondLargest);
        
    }
    cout<<largest<<endl;
    cout<<secondLargest;
}