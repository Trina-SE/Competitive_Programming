#include<bits/stdc++.h>

using namespace std;

int array_sum(int a[],int n){

     if(n<0){

        return 0;
     }

     return     a[n]       +      array_sum(a,n-1);
    //  kar sathe add hobe +   n kivabe change hobe
}

int main(){

   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
    cin>>a[i];
   }

   cout<<array_sum(a,n)<<"\n";


}
