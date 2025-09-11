#include<bits/stdc++.h>
using namespace std;

int printName(int i,int num){
    if(i>num) return 0;
    cout<<"Rishabh"<<endl;
    i++;
    printName(i,num);

    return 0;
}

int main(){
    int num;
    cin>>num;
    int i=1;
    printName(i,num);

    return 0;
}