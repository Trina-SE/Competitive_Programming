//0-based indexing
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,q,l,r,v;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>q;
  int difference_array[n+1]={0};
  for(i=0;i<q;i++){
    cin>>l>>r>>v;
     difference_array[l]=difference_array[l]+v;
     /*ei line ta ke avabeo likha jay----
        difference_array[l]+=v;
     */
     difference_array[r+1]=difference_array[r+1]-v;
    /*ei line ta ke avabeo likha jay----
        difference_array[r+1]-=v;
     */
  }
  int prefix_sum[n+1];
  prefix_sum[0]=difference_array[0];//difference_array er prefix_sum korte hobe
  for(i=1;i<n+1;i++){
    prefix_sum[i]=prefix_sum[i-1]+difference_array[i];
  }
  /*Extra prefix_sum array na niyeo kaj ta kora jabe
    prefix sum ta ke difference array er moddhei rakha jabe.
    for(i=1;i<n+1;i++){
        difference_array[i]=difference_array[i-1]+difference_array[i];
       {
   */
  for(i=0;i<n;i++){
    a[i]=prefix_sum[i]+a[i];
    cout<<a[i]<<" ";
  }
}
