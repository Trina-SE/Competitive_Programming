#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,j;
        cin>>n>>k;
        int a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;){
            if(k==0) break;
            if(a[i]>0){
                a[i]--;
                a[n-1]++;
                k--;
            }
            else{
                i++;
            }
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
         cout<<"\n";
    }
}
