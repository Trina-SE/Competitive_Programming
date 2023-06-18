#include<bits/stdc++.h>
using namespace std;
void rec(long long int);

int digit_sum(long long int a){

   if(a==0){
      return 0;
}
   return (a%10)+digit_sum(a/10);
}

void rec(long long int m){

    if(m<10) return;

   m=digit_sum(m);

   rec(m);

   cout<<m<<"\n";
}

int main(){
    string s,s1;
    cin>>s;
    int k,i;
    cin>>k;
    s1=s;
    long long int p;
    for(i=1;i<k;i++){
        s1=s1+s;
    }
    p=stoi(s1);

    rec(p);

}
