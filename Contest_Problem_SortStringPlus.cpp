#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin>>s;
  if(s.size()==1){
    cout<<s<<"\n";
    return 0;
  }
  for(int i=0;i<s.size()-2;i=i+2){
    for(int j=0;j<s.size()-i-2;j=j+2){
        if(s[j]>s[j+2]) swap(s[j],s[j+2]);
    }
  }
  cout<<s<<"\n";
  return 0;

}
