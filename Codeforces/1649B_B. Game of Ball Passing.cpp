#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,i,sum=0,m=0;
        cin>>n;
        long long int a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
            m=max(m,a[i]);
        }
        sum=sum-m;
        if(sum==0 && m==0){
            cout<<0<<"\n";
        }
        else if(sum>=m){
            cout<<1<<"\n";
        }
        else{
            cout<<m-sum<<"\n";
        }
    }

}
