#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       multiset<long long int>s;
        int b,k;
        long long int i,x,count=0,last_value=0;
        cin>>b>>k;
        for(i=0;i<b;i++){
            cin>>x;
            s.insert(x);
        }
        for(i=0;i<k;i++){
               auto it=s.end();
                  it--;
            last_value=*it;
            count+=last_value;
            s.erase(it);
            s.insert(last_value/2);
        }
        cout<<count<<"\n";
    }


}
