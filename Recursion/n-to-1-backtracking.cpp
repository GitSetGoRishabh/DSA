#include<bits/stdc++.h>
using namespace std;

void printNtoOne(int i,int n){
    if(i>n) return;
    printNtoOne(i+1,n);
    cout<<i<<endl;
}

int main(){
    int num;
    cin>>num;
    printNtoOne(1,num);

    return 0;
}