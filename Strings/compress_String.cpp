#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="aabbcccccaaa";
    string ans="";
    for(int i=0;i<s.size();i++){
        ans.push_back(s[i]);
        int count=1;
        while(i<s.size() && s[i]==s[i+1]){
                count++;
                i++;
        }
        ans+=to_string(count);
    }
    cout<<ans;
    return 0;
}