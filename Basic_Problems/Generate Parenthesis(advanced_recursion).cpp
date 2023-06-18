#include<bits/stdc++.h>
using namespace std;

void generate_bracket(string &s,int open,int close){

    if(open==0 && close==0){
        cout<<s<<"\n";
        return;
    }

    if(open>0){
        cout<<"t"<<"\t";
        s.push_back('(');
        generate_bracket(s,open-1,close);
        s.pop_back();
        cout<<"p"<<"\t";//backtracking
      //cout<<s<<"\n";
    }
    if(close>0){
        if(open<close){//rested open,rested close
            cout<<"k"<<"\t";
           s.push_back(')');
           generate_bracket(s,open,close-1);
           s.pop_back();
         cout<<"q"<<"\t";//backtracking
       //  cout<<s<<"\n";
        }
    }




}

int main(){

  int n;
  cin>>n;
  string a;
  generate_bracket(a,n,n);


}
