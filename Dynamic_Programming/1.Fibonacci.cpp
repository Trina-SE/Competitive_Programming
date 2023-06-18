#include<bits/stdc++.h>
using namespace std;

long long int dp[100000];

long long int fib(long long int n){
   if(dp[n]!=-1) return dp[n];
   if(n==0) return 0;
   if(n==1) return 1;
   return dp[n]=fib(n-1)+fib(n-2);

}

int main(){

   memset(dp,-1,sizeof(dp));
   long long int n;
   cin>>n;
   cout<<n<<"th fibonacci number:\n";
   cout<<fib(n);


}
