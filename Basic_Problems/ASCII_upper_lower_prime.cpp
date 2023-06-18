#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0)
        return false;
   }

  return true;

}
int main(){
   string s;
   cin>>s;
   long long int i,l=0,u=0,dif=0;
   for(i=0;i<s.size();i++){

    if(s[i]>=65&&s[i]<=90){
        l+=s[i]+32;
    }
    else if(s[i]>=97&&s[i]<=122){

        u+=s[i]-32;
    }
   }
   dif=abs(l-u);
   if(is_prime(dif))
       cout<<"1"<<"\n";
   else
    cout<<"0"<<"\n";

}
