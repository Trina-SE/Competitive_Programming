#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int a[],int n,int e,int l,int r)
{
    while(l<=r)
    {
        int mid1=l+((r-l)/3);
        int mid2=r-((r-l)/3);

        if(a[mid1]==e)  return mid1;
        else if(a[mid2]==e)  return mid2;
        else if(e<a[mid1])
        {
            r=mid1-1;
        }
        else if(e>a[mid2])
        {
            l=mid2+1;
        }
        else{
            //element is staying between mid1 and mid2
            l=mid1+1;
            r=mid2-1;
        }
    }
    return -1;
}

int main()
{

    cout<<"Array size?\n";
    int siz;
    cin>>siz;

    int a[siz];//input array must be sorted
    cout<<"Elements:\n";
    for(int i=0; i<siz; i++)
    {
        cin>>a[i];
    }
    cout<<"What element you want to search?\n";
    int e;
    cin>>e;
    int pos=ternarySearch(a,siz,e,0,siz-1);
    if(pos==-1) cout<<"This element is absent in this array\n";
    else cout<<"This element is present in this array at "<<pos+1<<" position\n";
    cout<<"Applying Ternary Search:)\n";

    }

/*
Input:
9
54 55 63 77 91 101 399 456 988
399
Output:
7
*/

