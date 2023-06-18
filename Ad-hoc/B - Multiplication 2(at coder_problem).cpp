#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,i,ans=1,f=0;
  cin>>n;
  long long int a[n+1];
  for(i=0;i<n;i++){
    cin>>a[i];
     if(a[i]==0) f=1;
  }
  if(f==1)
    cout<<0<<"\n";
  else{
    for(i=0;i<n;i++){
    if(ans<=1000000000000000000/a[i]){
         ans=ans*a[i];
    }
    else{
        ans=-1;
        break;
    }
  }
  cout<<ans<<"\n";

  }
  return 0;

}
