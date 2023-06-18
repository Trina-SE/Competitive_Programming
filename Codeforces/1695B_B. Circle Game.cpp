#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<long long int>v;
        long long int l,m=INT_MAX;
        for(i=0;i<n;i++){
            cin>>l;
            v.push_back(l);
        }
        if(n%2!=0){
            cout<<"Mike"<<"\n";
        }
        else{
           m=*min_element(v.begin(),v.end());
           vector<long long int>::iterator it;
           it=find(v.begin(),v.end(),m);
           i=distance(v.begin(),it);
           //cout<<i;
           if(i==0){
            cout<<"Joe"<<"\n";
           }
           else{
              if(i%2==0){
                cout<<"Joe"<<"\n";
              }
              else{
                cout<<"Mike"<<"\n";
              }
           }
        }
    }


}
