#include<bits/stdc++.h>
using namespace std;

int main(){

  map<string,string>m;

  string e,f;

  getline(cin,e);

  while(e!=""){  //"" don't give space character between double quotation

    stringstream str(e);

    str>>e>>f;

    m[f]=e;

    getline(cin,e);

  }

  string s;

  while(cin>>s){

     auto it=m.find(s);

        if(it==m.end()){
            printf("eh\n");
        }
        else{
            cout<<it->second<<"\n";
        }
  }

  return 0;


}
/*
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay
*/
