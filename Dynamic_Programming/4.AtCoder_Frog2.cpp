#include<bits/stdc++.h>
using namespace std;

int dp[1000010];
//k->given->constant.so,dp would be 1D array.

int jump(int n,int k,int arr[]){

    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=INT_MAX;

    for(int i=0;i<k;i++){
        if((n-i-1)>=0)
        ans=min(ans,jump(n-i-1,k,arr)+abs(arr[n-i-1]-arr[n]));
    }
       return dp[n]=ans;

}

int main(){
   memset(dp,-1,sizeof(dp));
   int n,k;
   cin>>n>>k;
   int h[n];
    for(int i=0;i<n;i++){
            cin>>h[i];
    }

    cout<<jump(n-1,k,h)<<"\n";


 }


