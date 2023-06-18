#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    vector<int>v;
    vector<pair<int,int>>p;
    while(n--){
       cin>>x;
    v.push_back(x);

    }
    //sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        y=*upper_bound(v.begin()+i,v.end(),v[i]);
        p.push_back({v[i],y});
    }
    for(auto value:p){
        cout<<value.first<<" "<<value.second<<"\n";
    }

}
