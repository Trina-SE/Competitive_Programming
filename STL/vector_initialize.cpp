#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<float>taka={5.3,567.9,0,8};
    vector<float>roll(5,13);
    cout<<"the given vector is: ";
    //for printing the vector
   for(float i:taka){
    cout<<i<<" , ";
   }
   cout<<"\nthe nxt vector is: ";
   for(const float &i:roll){
    cout<<i<<" \t ";
   }
}
