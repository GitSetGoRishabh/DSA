#include<bits/stdc++.h>
using namespace std;

int main(){

    // int largest = INT_MIN;
    int arr[6]={1,5,7,4,2,8};
    // for(int i=0;i<6;i++){
    //     if(largest<arr[i]) largest=arr[i];
    // }
    // int secondLargest=INT_MIN;
    // for(int i=0;i<6;i++){
    //     if(arr[i]!=largest) secondLargest=max(arr[i],secondLargest);
        
    // }


    // more optimised

    int maximum=arr[0];
    int secMaximum=INT_MIN;

    for(int i=1;i<6;i++){
        if(arr[i]>maximum){
            secMaximum=maximum;
            maximum=arr[i];
        }
    }

    cout<<maximum<<endl;
    cout<<secMaximum<<endl;
}