#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1="egg";
    string s2="add";
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2){
        cout<<"Not isomorphic";
        return 0;
    }
    vector<int>freq1(26,0);
    vector<int> freq2(26,0);
    for(int i=0;i<n1;i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
        if(freq1[s1[i]-'a']!=freq2[s2[i]-'a']){
            cout<<"Not isomorphic";
            return 0;
        }

    }
    cout<<"Isomorphic";
    return 0;
}