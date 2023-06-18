#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hash_array[N];
int main(){
   int n,i;
   cin>>n;
   int a[n+1];
   for(i=0;i<n;i++){
    cin>>a[i];
    hash_array[a[i]]++;
   }
   int q;
   cin>>q;
   while(q--){
    int x;
    cin>>x;
    cout<<hash_array[x]<<"\n";
   }


}
