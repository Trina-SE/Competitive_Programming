#include<bits/stdc++.h>
using namespace std;
long long int fac(long long int x){
     long long int i,ans=1,mod=998244353;
     for(i=1;i<=x;i++){
        ans=(ans*i)%mod;
     }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<0<<"\n";
        }
        else{
            long long int a=0,b=0,ans=0,mod=998244353;
            a=fac(n/2);
            b=fac(n/2);
            ans=(a*b)%mod;
            cout<<ans<<"\n";
        }
    }

}
