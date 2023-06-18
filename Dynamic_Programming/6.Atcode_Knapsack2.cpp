#include<bits/stdc++.h>
using namespace std;

long long int wt[105];
int val[105];
long long int dp[105][100005];

long long int knap(int indx,int value){  //this function will return minimum weight for
                                         //certain value
    if(value==0) return 0;
    if(indx<0) return 1e15;
    if(dp[indx][value]!=-1) return dp[indx][value];
   //not select item
   long long int weight=knap(indx-1,value);
   //select item
   if(value-val[indx]>=0)
   weight=min(weight,knap(indx-1,value-val[indx])+wt[indx]);

   return dp[indx][value]=weight;


}

int main(){
   memset(dp,-1,sizeof(dp));
   int n,w;
   cin>>n>>w;

     for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
     }
     for(int i=100005;i>=0;i--){
        if(knap(n-1,i)<=w){
            cout<<i<<"\n";
            break;
        }
     }

}

