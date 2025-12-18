#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[4]={1,2,4,5};
    int arrSum=0;
    for(int i=0;i<4;i++){
        arrSum+=arr[i];
    }
    int normalSum=n*(n+1)/2;
    int missingNum=normalSum-arrSum;

    cout<<missingNum;
}