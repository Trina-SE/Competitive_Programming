#include<bits/stdc++.h>
using namespace std;

string s,t,n;
int sl,tl;
int dp[3005][3005];

string lcs(){

  int i=sl-1,j=tl-1;
         while(i>=1 && j>=1){
             if(s[i]==t[j]){
                n.push_back(s[i]);
                i--;
                j--;
            }
            else{
                if(dp[i][j-1]>=dp[i-1][j]){
                    j--;
                }
                else{
                    i--;
                }
            }
         }

        reverse(n.begin(),n.end());
        return n;
}

int main(){

  cin>>s>>t;
  s="#"+s; //cout<<s<<"\n";
  t="#"+t; //cout<<t<<"\n";
  sl=s.size();  //cout<<sl<<"\n";
  tl=t.size();

  //make table
     for(int i=0;i<sl;i++){
        dp[0][i]=0;
        dp[i][0]=0;
     }
     for(int i=1;i<sl;i++){
        for(int j=1;j<tl;j++){
            if(s[i]==t[j]){
               dp[i][j]=dp[i-1][j-1]+1;
        }
        else{
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
        }
     }

     cout<<lcs()<<"\n";
}


