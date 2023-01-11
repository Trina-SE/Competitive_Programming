#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,j,m=INT_MAX;
        cin>>n>>k;
        int a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<101;i++){
            int count=0;
            for(j=0;j<n;){
                if(a[j]==i){
                   j++;
                }
                else{
                    j=j+k;
                    count++;
                }
            }
            m=min(count,m);

        }
            cout<<m<<"\n";
        }

    }


