//luv:-contest-2 (question:6)
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int diff[N];
int main(){
    int n,i;
    cin>>n;
    int f[n+2];
    for(i=0;i<n;i++){
        cin>>f[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x,l,r;
        cin>>x>>l>>r;
        diff[l]+=x;
        diff[r+1]-=x;
    }
    for(i=1;i<n;i++){
        diff[i]+=diff[i-1];
    }

    int mx=INT_MIN;

    for(i=0;i<n;i++){
        f[i]+=diff[i];
        mx=max(mx,f[i]);
    }

    cout<<mx<<"\n";

}
//test case:
/*
6
3 2 5 6 1 4
2
10 2 4
9 1 5

output:
25

*/
