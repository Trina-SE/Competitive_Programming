#include<bits/stdc++.h>
using namespace std;

void print_binary(int num){

   for(int i=10;i>=0;i--){
    cout<<((num>>i)&1);
   }
   cout<<"\n";
}
/* '^'->XOR
  x^x=0,
  x^0=x
*/

int main(){

  //  print_binary(5);

  int a=5,b=8;
  cout<<"Before swapping:\n";
  cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";

  a=a^b;
  b=b^a;//b=b^(a^b)=b^b^a=0^a=a
  //mane a er value b te assign hobe
  a=a^b;//a=(a^b)^a=a^a^b=0^b=b
  //mane b er value a te assign hobe

  cout<<"After swapping:\n";
  cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";


}
