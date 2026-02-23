#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,0,1,1,0,1,0,1,1,1};

    int i=0;
    int j=arr.size()-1;

    while(i<j){
        if(arr[i]==0) i++;
        else if(arr[j]==1) j--;
        else if(arr[i]==1 && arr[j]==0) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
}