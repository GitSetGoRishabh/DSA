#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int temp = num;
    int revNum=0;
    int lastDigit;
    while(num>0){
        lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
    if(revNum==temp){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}