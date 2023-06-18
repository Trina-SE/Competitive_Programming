#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=1;
        for(j=1;j<n;){
            if(s[i]=='('){
                count++;
                i=j+1;
                j=j+2;
               }
            else{
                while(s[j]!=')'&& j<n){
                    j++;
                }
                if(j<n){
                    count++;
                    i=j+1;
                    j=j+2;
                }
            }
        }
        cout<<count<<" "<<s.size()-i<<"\n";
    }


}
