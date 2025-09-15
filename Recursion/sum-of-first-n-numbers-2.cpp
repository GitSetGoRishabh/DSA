//functional recursion
#include<bits/stdc++.h>
using namespace std;


int sumOfNumbers(int num){
    if(num==0){
        return 0;
    }

    return num+sumOfNumbers(num-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfNumbers(n);
    return 0;
}