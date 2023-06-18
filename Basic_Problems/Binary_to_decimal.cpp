#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string b;
    cin>>b;
    long long int sum=0;
    long long int power=1;
    for(int i=b.size()-1;i>=0;i--){

       int binary_digit=b[i]-'0';//string to digit convert

        sum+=binary_digit*power;

        power=power*2;//1 2 4 8

    }
    cout<<sum<<"\n";
   }

}
