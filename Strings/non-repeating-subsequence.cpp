#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="bananad";
    vector<int> freq(26,0);
    string ans="";
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']==1){
            ans.push_back(s[i]);
        }
    }
    cout<<ans;
    return 0;
}