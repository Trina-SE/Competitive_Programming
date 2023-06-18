#include<bits/stdc++.h>
using namespace std;
void prime_factor(int n){
    int i,k=0;
      for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(k==1) cout<<"*";
            int count=0;
             while(n%i==0){
                n=n/i;
                count++;
             }
             k=1;
             cout<<i<<"^"<<count;
        }
      }

    if(n>1){
        if(k==1) cout<<"*";
        cout<<n<<"^"<<1;
    }
}
int main(){
    int n;
    cin>>n;
    prime_factor(n);

}
