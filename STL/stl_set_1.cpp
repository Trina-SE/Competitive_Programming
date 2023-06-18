//set printing,inserting
//set e element apna apni sorted hoye jay
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s={3,8,0,10,80};
    set<int>s1;
    s1.insert(20);
    s1.insert(41);
    s1.insert(11);
    cout<<s1.size()<<"\n";
    for(auto element:s1){
        cout<<element<<" ";
    }
    cout<<"\n";
    s1.erase(41);
    cout<<s1.size()<<"\n";
    cout<<"\n";
    s.insert(99);
    for(auto element:s){
        cout<<element<<" ";
    }
    cout<<"\n";
//set e kono element ache kina check korbo s.count diye
    cout<<s.count(5)<<"\n";
    //if s set er vitor 5 thake then output 1 hobe,,else 0 hobe
    cout<<s1.count(11)<<"\n";
    cout<<s1.count(41)<<"\n";
  return 0;

}
