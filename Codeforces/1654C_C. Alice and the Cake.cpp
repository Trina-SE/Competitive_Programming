#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,i,sum=0,a,x=0,y=0,f=0;
        cin>>n;
        vector<long long int>v;
        map<int,int>m;
        priority_queue<long long int>p;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            sum=sum+a;
            m[a]++;
        }
        if(n==1){
            cout<<"YES"<<"\n";
        }
        else{
        p.push(sum);
        while(!p.empty()){
            long long int o=p.top();
            p.pop();
            x=o/2;
            y=(o+1)/2;
            if(m[x]>0){
                m[x]--;
                 f++;
            }
            else if(m[x]==0 && x>1){
                p.push(x);
            }
            if(m[y]>0){
                m[y]--;
                f++;
            }
            else if(m[y]==0 && y>1){
                p.push(y);
            }
            if(p.size()>n){
                break;
            }
        }
        if(f==n){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }


    }

}
}
