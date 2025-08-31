#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){
        int count=0;
        while(n>0){
            count=count+1;
            n=n/10;
        }
        cout<<count<<endl;
    }

void countDigits2(int n){
    int count = log10(n)+1;
    cout<<count<<endl;
}
int main(){
    countDigits(7789);
    countDigits2(234534);
    return 0;
}


// Time complexity = log 10 (n)