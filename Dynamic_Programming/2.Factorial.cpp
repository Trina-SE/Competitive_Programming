#include<bits/stdc++.h>
using namespace std;

long long int dp[100000000];

long long int fact(int n){

    if(dp[n]!=-1) return dp[n];

    if(n==0 || n==1) return 1;

    return dp[n]=(n*fact(n-1));

}

int main(){

  memset(dp,-1,sizeof(dp));
  int n;
  cin>>n;

  cout<<"Factorial:"<<fact(n)<<"\n";


}
