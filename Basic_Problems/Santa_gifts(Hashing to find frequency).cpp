//luv:-contest-2 (question:4)
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int pre[N];
int main(){
    int n,k,i,count=0;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        pre[a[i]]++;
    }
    for(i=0;i<=N;i++){
       if(pre[i]>k){
        count++;
       }
    }
    cout<<count<<"\n";
}

//test case
/*
10 2
23 5 1 23 0 1 1 23 86 75
output:
2
*/
