#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(i=0;i<3;i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
        if(s=="yes"){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }



}
