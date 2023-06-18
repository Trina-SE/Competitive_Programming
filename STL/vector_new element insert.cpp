#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<float>marks{88,99,70.4,88.5,20};
  cout<<"previous vector: ";
  for(float i:marks){
    cout<<i<<" ";
  }
  marks.push_back(40.8);
  marks.push_back(90.4);
  cout<<"\nupdated vector: ";
  for(float i:marks){
    cout<<i<<" ";
  }

}
