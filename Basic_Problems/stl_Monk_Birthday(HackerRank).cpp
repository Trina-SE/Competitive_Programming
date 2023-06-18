#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        set<string>s;
        string x;
        for(i=0;i<n;i++){
           cin>>x;
           s.insert(x);
        }
        for(auto &value:s){
            cout<<value<<"\n";
        }
    }


}
