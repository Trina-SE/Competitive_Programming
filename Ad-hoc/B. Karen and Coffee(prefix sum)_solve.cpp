//:(
#include<bits/stdc++.h>
using namespace std;
int a[200001]={0},pre[200001],que[200001],pre2[200001];//global array
int main(){
   int n,k,q,i,l,r,t1,t2,ans=0;
   cin>>n>>k>>q;
    for(i=0;i<n;i++){
    cin>>l>>r;
    a[l]=a[l]+1; //difference array
    a[r+1]=a[r+1]-1;
   }
   pre[0]=a[0];
   for(i=1;i<200001;i++){
    pre[i]=pre[i-1]+a[i];//prefix sum
   }
   for(i=0;i<200001;i++){
    if(pre[i]>=k){
       que[i]=1;
    }
    else{
        que[i]=0;
    }
   }
   pre2[0]=que[0];
   for(i=1;i<200001;i++){
    pre2[i]=pre2[i-1]+que[i];//prefix sum
   }
   for(i=0;i<q;i++){
    ans=0;
    cin>>t1>>t2;
    ans=pre2[t2]-pre2[t1-1];
    cout<<ans<<"\n";
   }

}
