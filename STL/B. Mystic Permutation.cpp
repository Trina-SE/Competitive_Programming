//lexicographically minimal mystic permutations
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],i,f[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<-1;
        }
        else{
        vector<int>v;
        for(i=0;i<n;i++){
            v.push_back(i+1);
        }
        for(i=0;i<n;i++){
            if(a[i]!=v[i]){
                f[i]=v[i];
            }
            else{
                if(i==n-1){
                    f[i]=v[i];
                    swap(f[i-1],f[i]);
                }
                else{
                    f[i]=v[i+1];
                    swap(v[i],v[i+1]);
                }
            }
        }
        for(i=0;i<n;i++){
            cout<<f[i]<<" ";
        }
        }
        cout<<"\n";
    }


}
