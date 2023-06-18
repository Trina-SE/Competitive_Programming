//UVa maximum GCD problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
        int i=0,j,k;
        char s[500];
        gets(s);
        stringstream str(s);
        int a[500];
          while(str>>a[i]){
            i++;
          }
       /*   for(int p=0;p<i;p++){
            cout<<a[p]<<"\t";
          }
          cout<<"\n";*/
         int g=INT_MIN;
           for(int p=0;p<i;p++){
              for(j=p+1;j<i;j++){
                g=max(g,__gcd(a[p],a[j]));
              }
           }
           cout<<g<<"\n";



    }

}
