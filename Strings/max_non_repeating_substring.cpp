#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="banana";
    int i=0;
    int j=0;
    int n=s.size();
    string ans="";
    int maxi=0;
    vector<int> freq(26,0);
    while(j<n){
        freq[s[j]-'a']++;
        while(freq[s[j]-'a']>1){
            freq[s[i]-'a']--;
            i++;
        }
        int len=j-i+1;
        if(len>maxi){
            ans=s.substr(i,len);
            maxi=len;
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}