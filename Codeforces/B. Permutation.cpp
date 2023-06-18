#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d=2,i;
        cin>>n;
        set<int>s;
        int a[n];
        for(i=0;i<n;i++){
            s.insert(i+1);
        }
        a[0]=1;
        s.erase(s.begin());
        for(i=1;i<n;i++){
            set<int>::iterator it;
            it=s.begin();
            if(a[i-1]*d>n){
                a[i]=(*it);
                s.erase(a[i]);
            }
            else{
                a[i]=a[i-1]*d;
                s.erase(a[i]);
            }
        }
        cout<<d<<"\n";
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
       cout<<"\n";
}
}
