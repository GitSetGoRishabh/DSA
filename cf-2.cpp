#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int i=0;
        int layercount=0;
        int sizecount=1;
        string used="no";
        while(true){
            if((layercount==0 && a<=b) || a>=sizecount && (used=="black" || used=="no")){
                a=a-sizecount;
                layercount++;
                used="white";
                sizecount=sizecount*2;

            }
            else if((layercount==0 && b<=a) || b>=sizecount && (used=="white" || used=="no")){
                b=b-sizecount;
                layercount++;
                used="black";
                sizecount=sizecount*2;
            }
            else break;
        }
        cout<<layercount<<endl;
        
    }
}