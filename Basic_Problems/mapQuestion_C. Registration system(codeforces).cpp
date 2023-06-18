#include<bits/stdc++.h>
using namespace std;
int main(){

   int n;
   cin>>n;
   map<string,int>reg;
   while(n--){
    string s,a;
    cin>>s;
    reg[s]++;
    auto it=reg.find(s);
    if(it!=reg.end()){
        if(reg[s]>1){
            a=to_string((it->second)-1);
            cout<<s+a<<"\n";
        }
        else{
            cout<<"OK"<<"\n";
        }
    }
    else{
        cout<<"OK"<<"\n";
    }
   }

}

