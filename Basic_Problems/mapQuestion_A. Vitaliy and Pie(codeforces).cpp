#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,count=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>key;
    for(i=0;i<s.size();i=i+2){
        key[s[i]]++;
       auto it=key.find(s[i+1]+32);
       if(it!=key.end()){
         if(key[s[i+1]+32]>1){
            key[s[i+1]+32]--;
         }
         else{
            key.erase(s[i+1]+32);
         }
       }
       else{
        count++;
       }
    }

    cout<<count<<"\n";
}
