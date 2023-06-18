#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<float>marks(10,81.6);
   cout<<"previous marks: ";
   for(float i:marks){
    cout<<i<<" ";
   }
   marks.at(3)=86.9;
   marks.at(8)=84.7;
   cout<<"\nupdated marks: ";
   for(float i:marks){
    cout<<i<<" ";
   }
}
