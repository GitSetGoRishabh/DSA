#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={2,5,4,3,7,2};
    int key=2;

    for(int i=5;i>=0;i--){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
}