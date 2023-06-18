#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a;
    vector<int>e,o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&a);
        if(a%2!=0){
             o.push_back(a);
            }
        else {
             e.push_back(a);
            }

    }
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    for(i=0;i<o.size();i++){
        printf("%d ",o[i]);
    }
    printf("\n");
    for(i=0;i<e.size();i++){
        printf("%d ",e[i]);
    }
    return 0;
}
