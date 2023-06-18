#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,i,x=0,y=0,f=0;
        cin>>n>>k;
        long long int a[n+1];
        map<int,int>m;
        for(i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=0;i<n;i++){
            x=a[i]+k;
            y=a[i]-k;
            if(m[x]>0||m[y]>0){
                f=1;
                break;
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
