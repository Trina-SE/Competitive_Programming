#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,x=0,y=1;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]=0;
            }
        }
        a[n-1][0]=1;
        a[n-1][n-1]=1;
        for(i=0;i<n-1;i++){
            a[i][x]=1;
            a[i][y]=1;
            x++;
            y++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }


}
