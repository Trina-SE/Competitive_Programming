#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    map<pair<string,string>,vector<int>>m;
    string s1,s2;
    int n,i,x;
    cin>>s1>>s2>>n;
    for(i=0;i<n;i++){
       cin>>x;
      m[{s1,s2}].push_back(x);
    }
        for(auto &p:m){

             //p=ekta map;jar->key=pair,value=vector
             //p.first=pair & p.first.first=pair er first value
             //p.second=vector

            cout<<p.first.first<<" "<<p.first.second<<"\n";
             for(auto &value:p.second){
                 cout<<value<<" ";
             }
        }
        cout<<"\n";
   }



}
/*input:
3
a b 4
1 4 2 3
c d 2
1 2
d f 3
2 3 4
output:
a b
1 4 2 3
c d
1 2
d f
2 3 4
*/
