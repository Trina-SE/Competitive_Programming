#include<bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin>>q;
    unordered_set<long long int>s;
  while(q--){
     int type;
     long long int x;
    cin>>type>>x;
    if(type==1){
        s.insert(x);
    }
    else if(type==2){
        s.erase(x);
    }
    else{
        auto it=s.find(x);
        if(it!=s.end()){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
  }


}
