#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,gcd;
    cin>>a;
    cin>>b;
    
    // for(int i=1;i<=min(a,b);i++){
    //     if(a%i==0 && b%i==0){
    //         gcd = i;
    //     }
    // }

    // for(int i=min(a,b);i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    while(a>0 && b>0 ){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }

        if(a==0){
            cout<<b;
        }else{
            cout<<a;
        }
    }

    // cout<<gcd;
}