#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int l,r,a,p1=0,p2=0,k=0;
        cin>>l>>r>>a;
        p1=(r/a)+(r%a);
        if(l==r || a==1){
            cout<<p1<<"\n";
        }
        else{
              k=r-(r%a)-1;
              if(k<l){
                k=r;
              }
              p2=(k/a)+(k%a);
               cout<<max(p1,p2)<<"\n";

            }

    }
}
