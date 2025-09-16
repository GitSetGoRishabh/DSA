#include<bits/stdc++.h>
using namespace std;

int checkPallindrome(string s,int i){
    if(i>=s.size()/2) return 1;
    if(s[i]!=s[s.size()-i-1]){
        return -1;
    }
    return checkPallindrome(s,i+1);
}
int main(){
    string s="jatin";
    cout<<checkPallindrome(s,0);
}