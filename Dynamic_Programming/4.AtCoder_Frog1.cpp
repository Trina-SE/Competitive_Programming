#include<bits/stdc++.h>
using namespace std;

int dp[1000010];

int jump(int n,int arr[]){

    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=INT_MAX,ans1=INT_MAX,ans2=INT_MAX;

    //way-1
      ans1=jump(n-1,arr)+abs(arr[n-1]-arr[n]); //cout<<ans1<<"f1\n";
    //way-2
       if(n>1)
       ans2=jump(n-2,arr)+abs(arr[n-2]-arr[n]); //cout<<ans2<<"f2\n";
       ans=min(ans1,ans2);//cout<<ans<<"f3\n";
       return dp[n]=ans; //cout<<ans<<"f4\n";

}

int main(){
   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   int h[n];
    for(int i=0;i<n;i++){
            cin>>h[i];
    }

    cout<<jump(n-1,h)<<"\n";


 }

