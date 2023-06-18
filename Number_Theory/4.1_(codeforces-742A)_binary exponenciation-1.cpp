#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int n,result=1;
 cin>>n;
 int base=8; //As I have to find out only the last digit.1378->last digit=8
   while(n!=0){
    if(n%2==0){
        n=n/2;
        base=(base*base)%10;
    }
    else{
        n=n-1;
        result=(result*base)%10;
    }

   }
   cout<<result<<"\n";
}

