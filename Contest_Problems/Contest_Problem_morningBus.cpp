#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){

   return a>b;
}

int main(){

  while(1){

    int n,d,r;
    int pay=0;
    cin>>n>>d>>r;
      if(n==0 && d==0 && r==0) break;
      int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b,b+n,cmp);

        for(int i=0;i<n;i++){
            if((a[i]+b[i])>d){
                pay+=((a[i]+b[i])-d);
            }
        }

        cout<<pay*r<<"\n";

}
}

/*
2 20 5
10 15
10 15
2 20 5
10 10
10 10
0 0 0
*/
