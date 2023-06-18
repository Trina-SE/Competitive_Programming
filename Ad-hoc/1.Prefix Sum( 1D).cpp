//spoj website theke problem
//problem name:CSUMQ - Cumulative Sum Query
//0-based indexing means that array index is starting at 0,1,2----
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,q,l,r,result=0;
   cin>>n;
   int a[n],p[n];
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   //cout<<a[-1];-1 index does not exist.so,it contains 0.a[-1]=0
   p[0]=a[0];
   for(i=1;i<n;i++){
    p[i]=p[i-1]+a[i];
   }
   cin>>q;
   for(i=0;i<q;i++){
    cin>>l>>r;
    result=p[r]-p[l-1];
    cout<<result<<"\n";
   }



}
