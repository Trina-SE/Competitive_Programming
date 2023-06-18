#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,n;
   char cc;
   cin>>n;
   vector<char>ch(7,'h');
   for(i=0;i<n;i++){
    cin>>cc;
    ch.push_back(cc);
   }
   cout<<ch.size()<<endl;
   for(i=0;i<ch.size();i++){
    cout<<ch[i]<<" ";
   }
}
