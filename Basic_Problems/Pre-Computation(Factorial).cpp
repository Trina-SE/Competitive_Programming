#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
int fact[N];
int main(){
    int t;
    cin>>t;
    long long int product=1,i;
    fact[0]=1;
        for(i=1;i<=N;i++){
           fact[i]=(fact[i-1]*i)%M;
        }
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<"\n";

    }

}
