#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={2,5,3,2,9,7};
    int key=7;
    bool flag=0;
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            cout<<"true";
            flag=1;
            break;
        }
    }
    if(!flag) cout<<"False";
}