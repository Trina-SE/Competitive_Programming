#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i,lcm;
    cin>>a>>b>>c;
    long long int cth_value;
    for(i=1;c>0;i++){
        if(i%a==0||i%b==0){
            c--;
            cth_value=i;
        }
    }
   // cout<<cth_value;

   int step_value;//step value mane koto ghor por por number print korbo

   if(cth_value%a==0&&cth_value%b==0){
    //find lcm
    for(i=1;i<=a*b;i++){
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }
    }
    step_value=lcm;
   }
   else if(cth_value%a==0){
    step_value=a;
   }
   else if(cth_value%b==0){
    step_value=b;
   }



  for(i=cth_value;i>=0;i=i-step_value){
    cout<<i<<" ";
  }

}
