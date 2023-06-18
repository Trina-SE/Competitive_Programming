//circular e shudhu change:i->i%t,,loop ta 2*t porjonto cholbe
// r ekta if condion,i<t

#include<bits/stdc++.h>
using namespace std;

vector<int>next_greater(vector<int>v){
     stack<int>s;
     vector<int>v1(v.size());
     int i;
     int t=v.size();
     for(i=0;i<2*t;i++){
     while(!s.empty()&& v[i%t]>v[s.top()]){//top e index ase
        v1[s.top()]=i%t;//index boshabo
        s.pop();
     }
     if(i<t){
     s.push(i%t);//index push korsi
     }
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
        cout<<-1<<" ";
    }
    else{
        cout<<v[nge[i]]<<" ";
    }
   }
}
/*input:
5
1 2 3 4 3
output:
2 3 4 -1 4
*/
