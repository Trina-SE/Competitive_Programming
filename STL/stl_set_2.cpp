#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,i,x,y;
    cin>>q;
    set<int>s;
    for(i=0;i<q;i++){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            auto it=s.find(x);
            if(it==s.end()){
                cout<<"No"<<"\n";
            }
            else
                cout<<"Yes"<<"\n";
        }
    }

 return 0;

}
