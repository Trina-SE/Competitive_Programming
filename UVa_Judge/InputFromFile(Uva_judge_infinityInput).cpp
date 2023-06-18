#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int a){

  for(long long int i=2;i<=sqrt(a);i++){
    if(a%i==0)
        return false;
  }

  return true;
}

long long int rever(long long int a){

   long long int revers=0,rem;
   while(a!=0){
    rem=a%10;
    a=a/10;
    revers=(revers*10)+rem;
   }

   return revers;

}

int main(){
    long long int n,r;

    while(scanf("%lld",&n)!=EOF){
      // cin>>n;
    if(isPrime(n)){
        r=rever(n);
        if(r==n) cout<<n<<" is "<<"prime."<<"\n";
        else if(isPrime(r)) cout<<n<<" is "<<"emirp."<<"\n";
        else cout<<n<<" is "<<"prime."<<"\n";
    }
    else{
        cout<<n<<" is "<<"not prime."<<"\n";

    }
 }
}
