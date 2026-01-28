#include <bits/stdc++.h> 
using namespace std;

string stringSum(string &num1, string &num2) {
	int i=num1.size()-1;
	int j=num2.size()-1;
	int carry=0;
	string result = "";

	while(i>=0 || j>=0 || carry){
		int sum=carry;
		if(i>=0) sum+=num1[i--]-'0';
		if(j>=0) sum+=num2[j--]-'0';

		result.push_back((sum%10)+'0');
		carry=sum/10;
	}
	reverse(result.begin(),result.end());
	return result;
}

int main(){
    int t;
    cin>>t;

    while(t--){
		string s1;
    	string s2;       
        cin>>s1;
        cin>>s2;
		cout<<stringSum(s1,s2)<<endl;
    }

}

