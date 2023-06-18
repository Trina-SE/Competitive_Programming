#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i;
        cin>>n>>m;
        long long int x,y;
        unordered_set<long long int>s;
        for(i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        for(i=0;i<m;i++){
            cin>>y;
            auto it=s.find(y);
            if(it!=s.end()) {
                   cout<<"YES\n";
            }


            else {
                    cout<<"NO\n";

            }
            s.insert(y);
        }
    }

}
