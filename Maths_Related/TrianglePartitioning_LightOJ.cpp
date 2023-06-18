#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        double ab,ac,bc,r;
        cin>>ab>>ac>>bc>>r;

        /*let,ADE/BDEC=m/n=r/1
             ADE=m/(m+n)=r/r+1

        we know
          ADE/ABC =(DE/BC)^2
        =>sqrt(m)/sqrt((m+n))=DE/BC
        =>DE/BC= sqrt(m)/sqrt((m+n))
        =>DE/BC=sqrt(r/r+1)
        ABC and ADE->
        AD/AB = DE /BC
        =>AD/AB=sqrt(r/r+1)*/
        ///=>AD=(sqrt(r/r+1))*AB

        double ans=sqrt(r/(r+1))*ab;
        printf("Case %d: %lf\n",i,ans);
    }
}
