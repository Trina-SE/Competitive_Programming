//prefix sum :(
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q,i;
    cin>>n>>q;
    long long int a[n+1],p[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    p[0]=a[0];
    for(i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }
    while(q--){
        long long int x,y,ans=0;
        cin>>x>>y;
        if(x==y){
            cout<<p[x-1]<<"\n";
        }
        else{
        ans=p[x-1]-p[x-y-1];
        cout<<ans<<"\n";
    }


    }

}
