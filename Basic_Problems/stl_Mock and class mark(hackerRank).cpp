#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   multiset<pair<int,string>>s;
   while(n--){
    string name;
    int marks;
    cin>>name>>marks;
    s.insert({-1*marks,name});//jeno boro theke choto te sort hoi tai -1 dara gun korlam
   }
   for(auto &value:s){
    cout<<value.second<<" "<<(value.first)*-1<<"\n";
   }
}
