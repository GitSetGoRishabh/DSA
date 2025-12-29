#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[4]={1,2,4,5};
    int xor1=0;
    int xor2=0;
    for(int i=0;i<4;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    

    xor1=xor1^n;
    int ans=xor1^xor2;
    cout<<ans;
}