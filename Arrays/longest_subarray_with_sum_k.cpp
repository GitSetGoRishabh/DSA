#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[7]={1,2,3,0,1,1,1};
    int totalSum=0;
    int maxLen=0;
    int k;
    cin>>k;
    map<int,int> preSumMap;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        if(totalSum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem=totalSum-k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(totalSum) == preSumMap.end() ){
            preSumMap[totalSum]=i;
        }
    }
    cout<<maxLen;
}