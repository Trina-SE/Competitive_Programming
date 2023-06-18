//time limit exceed:(
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
   cin>>t;
   while(t--){
    long long int n,k,i,j,f=0;
    cin>>n>>k;
    long long int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]+k==a[i]&&i!=j){
                 f=1;
                 break;
            }
            else if(a[j]-k==a[i]&&i!=j){
                f=1;
                break;
            }
        }
    }
    if(f==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
   }


}
