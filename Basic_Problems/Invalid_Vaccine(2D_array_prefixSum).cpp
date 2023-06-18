//luv:-contest-2 (question:2)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,i,j;
    cin>>r>>c;
    int a[r+10][c+10];
     for(i=0;i<c;i++){
       a[0][i]=0;
    }
    for(i=0;i<r;i++){
       a[i][0]=0;
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>a[i][j];
            if(a[i][j]%2!=0){
                a[i][j]=1;
            }
            else{
               a[i][j]=0;
            }
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];//prefix sum
    }
    }

    int q;
    cin>>q;
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        cout<<a[l2][r2]-a[l1-1][r2]-a[l2][r1-1]+a[l1-1][r1-1]<<"\n";
    }

}

//test case
/*
3 3
1 1 1
1 2 1
1 1 1
4
1 1 3 3
1 2 1 2
2 2 3 3
2 2 2 2

output:
8
1
3
0

*/
