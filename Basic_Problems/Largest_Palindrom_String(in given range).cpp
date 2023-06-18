//luv:-contest-2 (question:5)
#include<bits/stdc++.h>
using namespace std;
const int N=26;
int character[N];
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        character[s[i]-'a']++;
    }

    int q;
    cin>>q;

    while(q--){
        int letters,i,oddCount=0,sum=0;
        cin>>letters;
        char t[letters+10],ch[letters+4];
        for(i=0;i<letters;i++){
            cin>>t[i];
            ch[i]=character[t[i]-'a'];
        }
        for(i=0;i<letters;i++){
            sum+=ch[i];
            if(ch[i]%2!=0){
                oddCount++;
            }
        }
        if(oddCount<=1){
            cout<<sum<<"\n";
        }
        else{
            cout<<sum-(oddCount-1)<<"\n";
        }

    }

}
//test case:
/*
abccddeecab
3
2
a b
2
a c
3
a b c

output:
4
5
7
*/
