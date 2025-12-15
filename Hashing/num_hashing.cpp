// hashing is used for pre storing and fetching.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precomputing
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    //fetch
    int number;
    cin>>number;
    cout<<hash[number];

    return 0;
}