#include<bits/stdc++.h>
using namespace std;
bool is_swap(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first){
        return p1.second<p2.second;//ja chai tai return korbo
    }
    else{
        return p1.first>p2.first;//ja chai tai return korbo
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),is_swap);//sorting e comparator function use kore change korlam
    for(auto value:v){
        cout<<value.first<<" "<<value.second<<"\n";
    }

}
/*input:
6
4 3
5 5
25 6
5 3
7 9
8 5
output:
25 6
8 5
7 9
5 3
5 5
4 3
mane->decending order e sort koro.but 1st
    element same hole,jetar 2nd element choto,oita age print koro.
    */
