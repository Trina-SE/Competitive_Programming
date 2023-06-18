#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int base,power,mod=10e9;
    cin>>base>>power;
    long long int result=1;
    while(power!=0){
        if(power%2==0){
            power=power/2;
            base=(base*base)%mod;//onk boro man ashte pare tai mod kortesi
        }
        else{
            result=(result*base)%mod;
            power=power-1;
        }
    }
    cout<<result;


}
