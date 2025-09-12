#include<bits/stdc++.h>
using namespace std;

void printNum(int num){
    if(num==0) return;
    cout<<num<<endl;
    num--;
    printNum(num);

}

int main(){
    printNum(10);
    return 0;
}