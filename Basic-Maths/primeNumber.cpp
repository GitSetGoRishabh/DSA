#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int count=0;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            count++;
            if(num/i!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"Prime number";

    }
    else{
        cout<<"Not a prime number";
    }
}