//comparator use kore decending order e sort
#include<bits/stdc++.h>
using namespace std;
bool is_swap(int a,int b){

 return a>b;//ja chai tai return korbo

}
int main(){

  int n;
  cin>>n;
  int a[n+1],i;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n,is_swap);
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

/*
input:
6
4 55 1 9 4 90
output:
90 55 9 4 4 1
*/
