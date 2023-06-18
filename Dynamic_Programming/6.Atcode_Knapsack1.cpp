#include<bits/stdc++.h>
using namespace std;

int wt[104],val[104];
long long int dp[104][100004];

long long int knap(int indx,int weight){

    if(weight<=0) return 0;
    if(indx<0) return 0;
    if(dp[indx][weight]!=-1) return dp[indx][weight];
    long long int value=INT_MIN;
    //item not select
    value=max(value,knap(indx-1,weight));
    //item select
    if((weight-wt[indx])>=0)
    value=max(value,knap(indx-1,weight-wt[indx])+val[indx]);

    return dp[indx][weight]=value;

}



int main(){
   memset(dp,-1,sizeof(dp));
   int n,w;
   cin>>n>>w;

     for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
     }
     cout<<knap(n-1,w);

}
