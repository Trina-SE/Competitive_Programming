#include<bits/stdc++.h>
using namespace std;

long long int dp[100000];

void fib(int a,int b,int n){
   if(n==0) return;
   int c=a+b;
   cout<<c<<" ";
   fib(b,c,n-1);
}

int main(){

   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   if(n==0) cout<<"Fibonacci Series:0\n";
   else if(n==1) cout<<"Fibonacci Series:0 1\n";
   else{
      cout<<"Fibonacci Series:0 1 ";
      fib(0,1,n-2);
   }


}

