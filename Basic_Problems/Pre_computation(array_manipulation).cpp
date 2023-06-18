#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int pre[N];
int main(){
   int n,q,i;
   cin>>n>>q;
   while(q--){
    int a,b;
    long long int k;
    cin>>a>>b>>k;
    pre[a]+=k;
    pre[b+1]-=k;

   }
   long long int mx=0;
   for(i=1;i<=N;i++){
    pre[i]=pre[i-1]+pre[i];
    mx=max(mx,pre[i]);
   }

   cout<<mx<<"\n";

}
