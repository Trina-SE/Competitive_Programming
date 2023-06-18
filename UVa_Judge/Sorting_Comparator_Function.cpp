#include<bits/stdc++.h>
using namespace std;

struct node{

  int s,m;

};

bool cmp(pair<int,node>n1,pair<int,node>n2){

    if(n1.second.s==n2.second.s){
            if(n1.second.m==n2.second.m) return n1.first<n2.first;
        return n1.second.m<n2.second.m;
    }

    return n1.second.s>n2.second.s;
}

int main(){

    vector<pair<int,node>>v;

    int n,x,y;
    cin>>n;

   for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({i+1,{x,y}});

   }

   sort(v.begin(),v.end(),cmp);

   for(int i=0;i<v.size();i++){
      cout<<v[i].first<<" ";
   }

}
