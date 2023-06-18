//time limit exceed:(
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int l,r,a,i,p=0,m=0;
        cin>>l>>r>>a;
        for(i=l;i<=r;i++){
            p=(i/a)+(i%a);
              if(p>m){
                m=p;
              }

        }
        cout<<m<<"\n";
    }


}
