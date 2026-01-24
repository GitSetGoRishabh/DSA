#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    vector<int> nums={-2,-3,4,-1,-2,1,5,-3};
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<j;k++){
                sum+=nums[k];
            }
            maxi=max(maxi,sum);
        }
    }

    cout<<maxi<<endl;
}