#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    while(n--){
        int type,marks;
        cin>>type;
        string s;
        cin>>s;
        if(type==1){
           cin>>marks;
           m[s]+=marks;
        }
        else if(type==2){
            m[s]=0;
        }
        else{
            cout<<m[s]<<"\n";
        }
    }

}
