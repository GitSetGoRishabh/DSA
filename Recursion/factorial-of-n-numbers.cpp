#include<bits/stdc++.h>
using namespace std;


int factorial(int num){
    if(num==1 || num==0){
        return 1;
    }

    return num*factorial(num-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}