#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,f=0,g=0,x,y;
  cin>>n;
  vector<pair<int,int>>p;

  for(int i=0;i<n;i++){
    cin>>x>>y;
    p.push_back(make_pair(x,y));
  }
  for(int i=0;i<n;i++){
    if(g==1 && f==1) break;
    else if(p[i].first<p[i].second) f=1;
    else if(p[i].first>p[i].second) g=1;
  }
  if(f==1 && g==1) cout<<"Happy Alex\n";
  else cout<<"Poor Alex\n";


}
