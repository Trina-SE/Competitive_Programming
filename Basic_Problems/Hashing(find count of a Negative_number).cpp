#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hash_array[N];
int main(){
    int n,mi=INT_MAX;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mi=min(mi,a[i]);
    }
    if(mi<0){
        mi=mi*(-1);
    }
   // cout<<mi<<"\n";
    for(int i=0;i<n;i++){
        a[i]=a[i]+mi;
        hash_array[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hash_array[x+mi]<<"\n";
    }

}

//test cases
/*
11
-4 -2 1 8 9 -2 -15 -4 -2 1 1
6
-4
-15
1
9
2
-2
*/

