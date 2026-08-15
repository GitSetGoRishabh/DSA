class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        vector<pair<int,int>> v;
        int n=deadline.size();
        for(int i=0 ; i<deadline.size() ; i++){
            v.push_back({profit[i],deadline[i]});
        }
        sort(v.rbegin(),v.rend());
        int maxi=*max_element(deadline.begin(),deadline.end());
        vector<int> hash(maxi+1,-1);
        int total=0;
        int count=0;
        for(int i=0 ; i<n ; i++){
            for(int j=v[i].second;j>=1;j--){
                if(hash[j]==-1){
                    hash[j]=i;
                    count++;
                    total+=v[i].first;
                    break;
                }
            }
        }
        return {count,total};
    }
};