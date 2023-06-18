#include<bits/stdc++.h>
using namespace std;
bool is_swap(pair<string,int>p1,pair<string,int>p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;//ja chai tai return korbpo
    }
    else{
        return p1.second>p2.second;//ja chai tai return korbpo
    }

}
int main(){
  int n;
  cin>>n;
  vector<pair<string,int>>v;
  while(n--){
    string s;
    int j;
    cin>>s>>j;
    v.push_back({s,j});
  }
  sort(v.begin(),v.end(),is_swap);
  for(auto value:v){
    cout<<value.first<<" "<<value.second<<"\n";
  }

}
/*input:
3
Smallwood 3
Vivian 5
Norbury 5

output:
Norbury 5
Vivian 5
Smallwood 3
*/
