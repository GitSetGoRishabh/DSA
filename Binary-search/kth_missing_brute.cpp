#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[6]={2,3,4,7,11,12};
    int num=5;
    int j=1;
    int i=0;
    int count=0;

    while(true){
        if(i<n && arr[i]==j){
            i++;
        }
        else{
            count++;
            if(count==num){
                cout<<j;
                break;
            }
        }
        j++;
    }
}