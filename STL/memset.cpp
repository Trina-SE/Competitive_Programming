//memset diye kono array ke 0 ba -1 dara shob index initialize kora jay
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  int a[n+2];
  memset(a,0,sizeof(a));
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<"\n";
  memset(a,-1,sizeof(a));
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<"\n";
  memset(a,5,sizeof(a));//garbage value dibe.karon memset shudhu 0,-1 assign kore
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }


}
