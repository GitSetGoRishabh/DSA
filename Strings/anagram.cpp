#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1="aabbcc";
    string s2="abcabc";
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2){
        cout<<"Not anagram";
        return 0;
    }
    vector<int>freq(26,0);
    for(int i=0;i<n1;i++){
        freq[s1[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        freq[s2[i]-'a']--;
    }
    int ans=1;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram"<<endl;
    return 0;
}