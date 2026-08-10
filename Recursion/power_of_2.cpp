#include <bits/stdc++.h> 
using namespace std;
vector < vector < int > > numberPattern(int n) {

  vector<vector<int>> ans;
  // Write your code here
  int Element=1;
  for(int i=0;i<n;i++){
    vector<int> curRow;
    int count=1<<i;
    for(int j=0;j<count;j++){
      curRow.push_back(Element);
      Element++;
      if(Element>9) Element=1;
    }
    ans.push_back(curRow);
  }

  return ans;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> res=numberPattern(n);
        for(int i=0;i<n;i++){
            int m=res[i].size();
            for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}