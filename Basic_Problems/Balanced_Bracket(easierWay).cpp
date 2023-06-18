#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int>m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(m[s[i]]<0){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return "NO";
            else{
            if(m[s[i]]+m[st.top()]==0){
                st.pop();
            }
            else return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}



int main(){
    int n,i;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
    cout<<isBalanced(s)<<"\n";
}
}

/*input:
3
{[()]}
{[(])}
{{[[(())]]}}
output:
YES
NO
YES
*/
