#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int revN=0;
    while(n>0){
        int lastDigit=n%10;
        revN=(revN*10)+lastDigit;
        n=n/10;
    }
    return revN;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Reversed number :"<<reverseNumber(num);
}