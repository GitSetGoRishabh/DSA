#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[6]={4,1,2,3,1,6};
    int target;
    cin>>target;

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            cout<<"YES";
            break;
        }
        mpp[a]=i;
    }
}