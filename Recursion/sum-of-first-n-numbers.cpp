// parameterised recursion

#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(int i,int sum){
    if(i<1){
        cout<<sum;
        return 0;
    }
    sumOfNumbers(i-1,sum+i);
    return 0;
}

int main(){
    sumOfNumbers(10,0);
    return 0;
}