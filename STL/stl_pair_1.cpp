#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,a[]={10,6,60,4,3,2,9};
   cout<<"the given array is:";
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
    cout<<a[i]<<" ";
   }
   vector<pair<int,int>>v;
   for(i=0;i<sizeof(a)/sizeof a[0];i++){
    v.push_back(make_pair(a[i],i));
   }
   sort(v.begin(),v.end());
   //printing the sorted vector
  /* for(i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }*/
   for(i=0;i<v.size();i++){
    a[v[i].second]=i;
   }
   cout<<"\nthe reduced index array is:";
   for(i=0;i<v.size();i++){
    cout<<a[i]<<" ";
   }


}
