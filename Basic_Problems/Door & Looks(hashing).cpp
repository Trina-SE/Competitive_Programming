//luv:-contest-2 (question:1)
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hashing[N];
int main(){
    int m,n,i,f=0;
    cin>>m>>n;
    int door[n];
    while(m--){
        int lock_no,door_no;
        cin>>lock_no>>door_no;
        hashing[door_no]++;
    }
    for(i=0;i<n;i++){
        cin>>door[i];
        if(hashing[door[i]]<1){
           f=1;
        }
    }
    if(f==1) cout<<"NO\n";
    else cout<<"YES\n";

}
//test case
/*
3 4
1 2
1 3
2 3
1 2 3 4
*/
