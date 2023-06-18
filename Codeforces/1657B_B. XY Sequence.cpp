#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,i,b,x,y,sum=0;
        cin>>n>>b>>x>>y;
        long long int v[n+1];
        v[0]=0;
        for(i=1;i<=n;i++){
            if((v[i-1]+x)>b){
                v[i]=v[i-1]-y;
                sum=sum+v[i];
            }
            else{
                v[i]=v[i-1]+x;
                sum=sum+v[i];
            }
        }
        cout<<sum<<"\n";
    }

}
