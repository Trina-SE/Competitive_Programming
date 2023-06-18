#include<bits/stdc++.h>
using namespace std;

const long long N=1000000007;

long long int find_nth_fibonacci(int n){

    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        return (find_nth_fibonacci(n-2)+find_nth_fibonacci(n-1))%N;
    }


}
int main(){

   int n;
   cin>>n;

  cout<<find_nth_fibonacci(n)<<" is the "<<n<<"th number";


}
