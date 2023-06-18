/****
Given an array a of integers.All integers are present in even count except one.Find that
one integer which has odd count in O(N) time complexity and O(1) space;

test case:
9
2 4 6 7 7 4 2 2 2
output:6

****/

/**
WHY USE XOR?
=>Because,if u use hash_array(count 1st ei ber korlam)->space need=O(N);
          if u use map->time will not be O(N);
**/

#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,i,ans=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
    ans^=a[i];
  }
  /**
  even er XOR 0 hoye jabe.
  cz b^a^b^c^a^c^^b^c^b=c (cz a^a=0,even time pair hoye cancel hobe)

  */

  cout<<ans<<"\n";

}
