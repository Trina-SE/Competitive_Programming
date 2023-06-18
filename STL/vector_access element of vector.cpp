#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<float>marks={20.8,3.8,9.0,6,8};
    cout<<"the first element of the vector is:"<<marks.at(0);
    cout<<"\nthe 3rd element of the vector is:"<<marks.at(2);//or,marks[2] avabeo likha jay
    cout<<"\nthe 2nd element of the vector is:"<<marks[1];
    cout<<"\nthe 6th element of the vector is:"<<marks[5];//it will give u garbage value
    cout<<"\nthe 6th element of the vector is:"<<marks.at(5);//it will send u messege

}
