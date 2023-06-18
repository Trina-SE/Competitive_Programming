#include<bits/stdc++.h>
using namespace std;

vector<int>next_greater(vector<int>v){
     stack<int>s;
     vector<int>v1(v.size());
     int i;
     for(i=0;i<v.size();i++){
     while(!s.empty()&& v[i]>v[s.top()]){//top e index ase
        v1[s.top()]=i;//index boshabo
        s.pop();
     }
     s.push(i);//index push korsi
     }
     while(!s.empty()){
        v1[s.top()]=-1;
        s.pop();
     }
     return v1;
}
int main(){
  int n,x,i;
  cin>>n;
  vector<int>v(n),nge;
  for(i=0;i<n;i++){
    cin>>x;
    v[i]=x;
  }
   nge=next_greater(v);
   for(i=0;i<n;i++){
    if(nge[i]==-1){
        cout<<v[i]<<" "<<-1<<"\n";
    }
    else{
        cout<<v[i]<<" "<<v[nge[i]]<<"\n";
    }
   }
}
/*
input:
4
4 5 2 25
output:
4 5
5 25
2 25
25 -1
*/
