//1 based
#include<bits/stdc++.h>
using namespace std;

 void fibonacci_series(int a,int b,int n){

    int c;

    if(n==0) return;

    c=a+b;
    cout<<c<<" ";
    fibonacci_series(b,c,n-1);

 }
int main(){

    int n;
    cin>>n;
    int a=1,b=1;

   if(n==1) cout<<"1";
   else{
        cout<<"1 1 ";
    fibonacci_series(a,b,n-2);
   }

}
