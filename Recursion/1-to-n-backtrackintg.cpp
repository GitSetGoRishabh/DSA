#include<bits/stdc++.h>
using namespace std;

void printOnetoN(int i){
    if(i<1) return;

    printOnetoN(i-1);
    cout<<i<<endl;
}

int main(){
    int num;
    cin>>num;
    printOnetoN(num);
    return 0;
}