#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	    string s;
	    cin>>s;
	    long long n=s.size();

	    int zeroCount=0;
	    int oneCount=0;
	    int good=0;

	    for(int j=0;j<n;j++){
	        if(s[j]=='1') oneCount++;
	        else zeroCount++;
	        if(oneCount-zeroCount>=0) good++;
	    }
	    cout<<good<<endl;
	}

}
