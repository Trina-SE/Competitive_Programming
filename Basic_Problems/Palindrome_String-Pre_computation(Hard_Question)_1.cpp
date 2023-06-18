//Optimizing method
//wrong -episode:16
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hash_array[N][26];
int main(){
    int t;
    cin>>t;
  while(t--){
      int n,q,i,j;
        for(i=0;i<N;i++){//each test case er jonno fresh hash array lagbe,tai initialization
           for(j=0;j<26;j++){
              hash_array[i][j]=0;
        }
     }
    cin>>n>>q;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        hash_array[i][s[i]-'a']++;
    }
    for(i=0;i<26;i++){//26 latter er count ber korte hobe
        for(j=1;j<n;j++){
           hash_array[j][i]+=hash_array[j-1][i];
        }
    }
    while(q--){
        int l,r,i;
        cin>>l>>r;
        l--;
        r--;
        int odd_count=0;
        for(i=1;i<26;i++){
            int count=hash_array[r][i]-hash_array[l-1][i];
            if(count%2!=0){
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


}

