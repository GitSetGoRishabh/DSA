#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1=8;
    int n2=7;

    int a1[n1]={1,2,2,3,3,4,5,6};
    int a2[n2]={2,3,3,5,6,6,7};

    int i=0;
    int j=0;

    vector<int> intersec;

    while(i<n1 && j<n2){
        if(a1[i]<a2[j]) i++;
        else if(a1[i]>a2[j]) j++;
        else{
            intersec.push_back(a1[i]);
            i++;
            j++;
        }
    }

    for(int k=0;k<intersec.size();k++){
        cout<<intersec[k];
    }
}