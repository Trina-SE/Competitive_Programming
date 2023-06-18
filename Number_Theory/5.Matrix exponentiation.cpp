#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define N 52
ll a[N][N],I[N][N];
#define mod 1000000007

void mul(ll a[][N],ll b[][N],ll s){

     ll i,j,k,sum=0;
     ll result[s][s];

     for(i=0;i<s;i++){
        for(j=0;j<s;j++){
                sum=0;
            for(k=0;k<s;k++){
                sum=(sum+((a[i][k]*a[k][j])%mod))%mod;
            }
            result[i][j]=sum;
        }
     }

    for(i=0;i<s;i++){
            for(j=0;j<s;j++){
                a[i][j]=result[i][j];
            }
        }


}

void power(ll a[][N],ll s,ll p){

     ll i,j;

    for(i=0;i<s;i++){
            for(j=0;j<s;j++){
                if(i==j){
                    I[i][j]=1;
                }
                else{
                   I[i][j]=0;
                }
            }
        }

  while(p){

    if(p%2==0){

        mul(a,a,s);
        p=p/2;
    }
    else{

        mul(I,a,s);//1st e I matrix pathaisi,tai I e store hobe(a hocche I mul e)
        p--;
    }


  }
  for(i=0;i<s;i++){
            for(j=0;j<s;j++){
                a[i][j]=I[i][j];
            }
        }


}

int main(){

   ll t;
   cin>>t;
   while(t--){
       ll s,p,i,j;
       cin>>s>>p;
        for(i=0;i<s;i++){
            for(j=0;j<s;j++){
                cin>>a[i][j];
            }
        }
        power(a,s,p);

         for(i=0;i<s;i++){
            for(j=0;j<s;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }



   }




}
