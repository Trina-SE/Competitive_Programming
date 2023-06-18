#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        map<int,int>m;
        for(i=0;i<n;i++){
            m[s[i]]++;
        }
        count=count+(2*n);
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>1){
                count=count-(it->second)+1;
            }
        }
        cout<<count<<"\n";
    }


}
