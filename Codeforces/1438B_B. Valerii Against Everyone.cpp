#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<ll,ll>m;
        ll i,p,f=0;
        for(i=0;i<n;i++){
            cin>>p;
            m[p]++;
        }
        map<ll,ll>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if((it->second)>1){
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
