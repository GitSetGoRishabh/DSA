#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=6;
    int n2=6;
    int i=0;
    int j=0;
    int a1[n1]={1,1,2,3,4,5};
    int a2[n2]={1,3,4,5,6,7};

    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            if(unionArr.size()==0 || unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }
            j++;
        }

    }

    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }
            j++;
    }

    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }
            i++;
    }

    for(int x:unionArr){
        cout<<x;
    }
}