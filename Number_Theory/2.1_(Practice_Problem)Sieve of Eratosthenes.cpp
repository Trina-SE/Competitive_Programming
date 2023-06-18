//Spoj website(find the kth prime)
#include<bits/stdc++.h>
using namespace std;

//bool use korte hobe cz it takes 1 btye and integer takes 4 byte
bool a[90000001];//globally vector/array declare korle automatically
vector<int>v; // 0 dara(false) initialize hoi

void kth_prime(){
    for(int i=2;i<=sqrt(90000001);i++){
        if(a[i]==false){
            for(int j=i*i;j<=90000001;j+=i){
                a[j]=true;
            }
        }
    }
    for(int i=2;i<=90000001;i++){
        if(a[i]==false){
            v.push_back(i);
        }
    }
}
int main(){
    long long int q,k;
    cin>>q;
    kth_prime();
     while(q--){
        cin>>k;
        cout<<v[k-1]<<"\n";
    }


}
