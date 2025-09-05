// when the indivisual digits raised to the power to the number of digit and there sum sums up to the number itself it is armstrong number 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    int duplicate;
    int lastDigit;
    int count;
    int sum=0;
    int countDigits;
    cout<<"Enter the no.of digits:";
    cin>>count;
    cout<<"Enter the number:";
    cin>>num;
    duplicate=num;

    while(num>0){
        lastDigit=num%10;
        sum=sum+ pow(lastDigit,count);
        num=num/10;
        countDigits++;
    }

    if(duplicate==sum){
        cout<<"Armstrong number";
    }
    else if(count!=countDigits){
        cout<<"Numbe of elements entered and told doesn't match ";
    }
    else{
        cout<<"Not an armstrong number";
    }

    return 0;
}