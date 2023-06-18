//Brute force method
//wrong -episode:16
#include<bits/stdc++.h>
using namespace std;
const int N=26;
int hash_array[N];
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,q,i;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        int l,r,odd_count=0;
        cin>>l>>r;
        l--;//string '0' based indexing
        r--;
    for(i=l;i<=r;i++){
      hash_array[s[i]-'a']++;
    }
    for(i=0;i<26;i++){
    if(hash_array[i]%2!=0){
       odd_count++;
    }
    }
    if(odd_count>1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }

   }

   }
   return 0;
}
//test case
/*
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4       */
