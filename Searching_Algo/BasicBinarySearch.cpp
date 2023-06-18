#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int e,int l,int r)
{
    while(l<=r)
    {
        int mid=l+((r-l)/2);
        if(a[mid]==e)  return mid;
        else if(a[mid]<e)
        {
            l=mid+1;
        }
        else if(a[mid]>e)
        {
            r=mid-1;
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
    int pos=binarySearch(a,siz,e,0,siz-1);
    if(pos==-1) cout<<"This element is absent in this array\n";
    else cout<<"This element is present in this array at "<<pos+1<<" position\n";
    cout<<"Applying Binary Search:)\n";

    }

/*
Input:
9
54 55 63 77 91 101 399 456 988
399
Output:
7
*/
