#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    char s[100];
    cout<<"how many students are?\n";
    cin>>n;
    float m;
  vector<pair<float,string>>v;
  for(i=0;i<n;i++){
    scanf("%s %f",s,&m);
    v.push_back(make_pair(m,s));
  }
  sort(v.begin(),v.end());
  cout<<"the result is:\n";
  for(i=n-1;i>=0;i--){
    cout<<v[i].second<<" "<<v[i].first<<"\n";
  }

  return 0;
  //set er pair er output er jonno
  /*for(auto const& var:a){
            cout<<"("<<var.first<<","<<var.second<<")"<<" ";*/

}
