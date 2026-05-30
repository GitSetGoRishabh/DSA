#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={3,4,2,1,8,5};
    int key=8;
    int flag=0;

    for(int i=0;i<6;i++){
        if(arr[i]==key){
            cout<<i;
            flag=1;
        }
    }
    if(!flag) cout<<"Not found";
}