//luv:-contest-2 (question:3)
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int hashing[N];
int main(){
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        hashing[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int position,tk;
        cin>>position>>tk;
        position--;
        if(a[position]==tk) {
                cout<<"0"<<"\n";
                continue;//nicher condition r dekhar dorkar nai
        }
        hashing[a[position]]--;//nijer theke toh r nije dhar nibe na.tai nijer position er count thke
                               // 1 minus kora hoise

        if(a[position]>tk){
            if(hashing[tk]<1) cout<<"-1"<<"\n";
            else
               cout<<hashing[tk]<<"\n";
        }
        else{
           if(((hashing[tk-a[position]])<1) && (hashing[tk]<1))
            cout<<"-1"<<"\n";
           else{
             cout<<(hashing[tk-a[position]])+(hashing[tk])<<"\n";
           }
        }

    }

}

//test case
/*
6
1 3 3 6 4 6
4
1 4
4 3
4 6
1 2

output:
3
2
0
-1
*/
