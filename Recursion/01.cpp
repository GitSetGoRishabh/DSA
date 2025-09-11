// Recursion - When a function calls itself until a specified condition is met.
// A recursive function without a base condition can lead to stack overflow

#include<bits/stdc++.h>
using namespace std;

int num=0;

int printer(){
    cout<<num;
    num++;
    printer();

    return 0;
}

int basePrinter(){
    cout<<num;
    if(num==4){
        return 0;
    }
    num++;
    basePrinter();

    return 0;
}

int main(){
    basePrinter();
}

