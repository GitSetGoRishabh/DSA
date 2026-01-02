#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counter26=0;
        int counter25=0;

        for(int i=0;i<n-3;i++){
            if(s.substr(i,4)=="2026"){
                counter26++;
                break;
            }
            else if(s.substr(i,4)=="2025"){
                counter25++;
            }
        }

        if(counter25 != 0 && counter26==0 ) cout<<1<<endl;
        else cout<<0<<endl;
    }
}