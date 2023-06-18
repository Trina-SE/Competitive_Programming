//online judge(10699 - Count the factors)
#include<bits/stdc++.h>
using namespace std;
void count_factor(int n){
    int count=0;
    int actual=n;
     for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            while(n%i==0){
                n=n/i;
            }
        }
     }
     if(n>1) count++;
     cout<<actual<<":"<<count<<"\n";

}
int main(){
   while(1){
    int n;
    cin>>n;
    if(n==0){
        break;
    }
    count_factor(n);
   }

}
