#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,i,q;
    cin>>n>>q;
    int a[n+5],pre_forward[n+5],pre_backward[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    pre_forward[0]=0;
    pre_backward[n+1]=0;
    for(i=1;i<=n;i++){
        pre_forward[i]=__gcd(pre_forward[i-1],a[i]);
    }
    for(i=n;i>=1;i--){
        pre_backward[i]=__gcd(pre_backward[i+1],a[i]);
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<__gcd(pre_forward[l-1],pre_backward[r+1])<<"\n";
    }
  }

}
