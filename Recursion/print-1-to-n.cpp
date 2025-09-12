#include<bits/stdc++.h>
using namespace std;

void printNum(int i,int num){
    if(i>num) return;
    cout<<i<<endl;
    i++;
    printNum(i,num);

}

int main(){
    printNum(1,10);
    return 0;
}