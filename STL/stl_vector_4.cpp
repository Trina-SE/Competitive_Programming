//print and swap two vectors
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"enter the size of 2nd vector:";
    cin>>n;
    vector<int>v= {7,9,8},v2;
    for(i=0;i<n;i++){
       cin>>a;
       v2.push_back(a);
    }
    cout<<"The first vector is:";
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<"\n";
    cout<<"The second vector is:";
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<"\n";
    swap(v,v2);
    cout<<"after swapping the vectors are--\n";
    cout<<"now the first vector is:";
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<"\n";
    cout<<"now the 2nd vector is:";
    for(auto element:v2){
        cout<<element<<" ";
    }
    return 0;


}
