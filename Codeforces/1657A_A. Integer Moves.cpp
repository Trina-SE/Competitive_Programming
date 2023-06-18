#include<bits/stdc++.h>
using namespace std;
bool perfect_square(int n){
    int i;
    for(i=1;i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
    return false;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0){
            cout<<0<<"\n";
        }
        else if(perfect_square((x*x)+(y*y))){
            cout<<1<<"\n";
           }
        else{
            cout<<2<<"\n";
           }

    }

}
