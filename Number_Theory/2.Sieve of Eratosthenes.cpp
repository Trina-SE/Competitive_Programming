//1 to 100 vitore prime number koita ase(time limit jeno na khay)
#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
    int a[n+1];
    memset(a,0,sizeof(a));
    for(int i=2;i<=sqrt(n);i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            cout<<i<<"\n";
        }
    }


}

int main(){

   int n;
   cin>>n;
   sieve(n);


}
