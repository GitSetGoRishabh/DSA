#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,1,2,3,4};
    int target;
    cin>>target;

    int i=0;
    int j=n-1;
    while(i<j){
        if((arr[i]+arr[j])==target){
            cout<<"YES";
            break;
        }
        else if((arr[i]+arr[j])>target) j--;
        else i++;
    }
}