#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,coun=0;
   cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     for (int i = 0; i < n; i++) {

    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
                coun++;
            swap(a[j], a[j + 1]);
        }
    }

}
   cout<<"Array is sorted in "<<coun<<" swaps.\n";
   cout<<"First Element: "<<a[0]<<"\n";
   cout<<"Last Element: "<<a[n-1]<<"\n";

}
