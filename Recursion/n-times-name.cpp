#include<bits/stdc++.h>
using namespace std;
int i=1;
int printName(int num){
    if(i>num) return 0;
    cout<<"Rishabh"<<endl;
    i++;
    printName(num);

    return 0;
}

int main(){
    int num;
    cin>>num;
    
    printName(num);

    return 0;
}