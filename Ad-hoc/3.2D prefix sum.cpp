//2D prefix sum array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int prefix_sum[r][c];
    prefix_sum[0][0]=a[0][0];
    for(i=1;i<c;i++){
        prefix_sum[0][i]=prefix_sum[0][i-1]+a[0][i];
    }
    for(i=1;i<r;i++){
        prefix_sum[i][0]=prefix_sum[i-1][0]+a[i][0];
    }
    for(i=1;i<r;i++){
        for(j=1;j<c;j++){
 prefix_sum[i][j]=prefix_sum[i-1][j]+prefix_sum[i][j-1]+a[i][j]-prefix_sum[i-1][j-1];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<prefix_sum[i][j]<<" ";
        }
        cout<<"\n";
    }



}
