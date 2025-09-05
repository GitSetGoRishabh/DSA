#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number for which you want to check the divisors:";
    cin>>num;

    // for(int i=1;i<=num;i++){
    //     if(num%i==0){
    //         cout<<i<<" ";
    //     }
    // }

    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<i<<" ";
            if(num/i != i){
            cout<<num/i<<" ";
            }
        }
        
    }

    return 0;
}