//time limit exceed:(
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,i,j,l,r,a[200001]={0},pre[200001],t1,t2,count=0;
    cin>>n>>k>>q;
    for(i=0;i<n;i++){
        cin>>l>>r;
        a[l]=a[l]+1;
        a[r+1]=a[r+1]-1;
    }
    pre[0]=a[0];
    for(i=1;i<200001;i++){
       pre[i]=pre[i-1]+a[i];
    }
    for(i=0;i<q;i++){
        count=0;
        cin>>t1>>t2;
         for(j=t1;j<=t2;j++){
            if(pre[j]>=k){
                count++;
            }
         }
         cout<<count<<"\n";
    }




}
