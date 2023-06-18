#include<bits/stdc++.h>
using namespace std;
const int N=42;
long long int p[N][N];
void pascal(){
    p[0][0]=1;
   for(int i=1;i<N;i++){
    p[i][0]=1;
    p[i][i]=1;
     for(int j=1;j<i;j++){
        p[i][j]=p[i-1][j-1]+p[i-1][j];
     }
   }
}
int main(){
    int t;
    cin>>t;
    pascal();
  while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
        cout<<p[i][j]<<" ";
    }
    cout<<"\n";
  }

  }
}
