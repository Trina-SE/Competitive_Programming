#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

  while((scanf("%d",&n))!=EOF){

     int coun=0;
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

    cout<<"Minimum exchange operations : "<<coun<<"\n";

}
}
