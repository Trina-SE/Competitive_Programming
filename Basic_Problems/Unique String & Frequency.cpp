#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    map<string,int>m;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    for(auto value:m){
        cout<<value.first<<" "<<value.second<<"\n";
    }

}
