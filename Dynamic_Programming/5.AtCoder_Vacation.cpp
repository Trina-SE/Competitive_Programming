#include<bits/stdc++.h>
using namespace std;
//solve the question using table
int dp[100000][3];
int a[100000],b[100000],c[100000],day;

int happy(){

    dp[0][0]=a[0];
    dp[0][1]=b[0];
    dp[0][2]=c[0];

     for(int i=1;i<day;i++){
        dp[i][0]=max(dp[i-1][1],dp[i-1][2])+a[i];
        dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b[i];
        dp[i][2]=max(dp[i-1][1],dp[i-1][0])+c[i];
     }

     return(max(dp[day-1][0],max(dp[day-1][1],dp[day-1][2])));
}

int main(){

   cin>>day;

    for(int i=0;i<day;i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    cout<<happy()<<"\n";
}
