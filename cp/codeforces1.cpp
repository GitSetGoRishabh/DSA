#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        string ans="YES";

        int count=0;

        for(int i=0;i<n;i++){
           
            if(s[i]=='Y'){
                count++;
            }

            if(count==2){
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }

}