#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k,i;
    cin>>n>>k;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=0,ans1=0,ans2=0,m=INT_MAX;
    for(i=0;i<=n-k;i++){
        l=i;
        r=l+k-1;
        ans1=abs(a[l])+abs(a[r]-a[l]);
        ans2=abs(a[r])+abs(a[r]-a[l]);
        m=min((min(ans1,ans2)),m);
    }
    cout<<m<<"\n";


}
