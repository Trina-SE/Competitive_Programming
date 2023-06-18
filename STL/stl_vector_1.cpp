#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    vector<int>e;
    vector<int>o;
    scanf("%d",&n);
    for(i=1;i<=n;){
        o.push_back(i);
        if(i==n){
            break;
        }
        e.push_back(i+1);
        i=i+2;
    }
    if(o.size()>e.size()){
        e[e.size()]=0;
    }
    for(i=0;i<o.size();i++){
     printf("%d\t",o[i]);
     if(e[i]==0){
        break;
     }
     printf("%d\n",e[i]);
    }
    return 0;


}

