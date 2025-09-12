#include<bits/stdc++.h>
using namespace std;

int sum=0;
int i=1;
int sumOfNumbers(int i,int num){
    if(i>num) return 0;
    sum=sum+i;
    i++;
    sumOfNumbers(i,num);
    return sum;
}

int main(){
    sumOfNumbers(i,10);
    return 0;
}