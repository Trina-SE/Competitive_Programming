//IS a*b>10^18?
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a,b;
    long long int p=10e18;//'e' mane power.10e18 mane 10^18
    c=p/a;
    if(b>c)
        cout<<"Big"<<"\n";
    else
        cout<<"Small"<<"\n";
}
