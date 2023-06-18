#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b,div=0,remainder=0,temp=0,i;
        cin>>n>>r>>b;
        div=r/(b+1);
        remainder=r%(b+1);
        while(b--){
            temp=div;
            if(remainder!=0){
                temp++;
                remainder--;
            }
            for(i=0;i<temp;i++){
                cout<<"R";
            }
            cout<<"B";
        }
        if(remainder!=0){
            div++;
        }
        for(i=0;i<div;i++){
            cout<<"R";
        }
        cout<<"\n";
    }




}
