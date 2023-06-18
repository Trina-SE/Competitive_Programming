#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,q,p;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>p;
    auto it=lower_bound(v.begin(),v.end(),p);
    if(*it==p){
        cout<<"Yes"<<" "<<distance(v.begin(),it)+1<<"\n";
    }
    else{
        cout<<"No"<<" "<<distance(v.begin(),it)+1<<"\n";
    }




    }

}
