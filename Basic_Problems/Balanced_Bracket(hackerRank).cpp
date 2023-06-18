#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){

        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
           }
        else{
            if(st.empty()) return "NO";
            else{

        if(s[i]==')'&& st.top()=='('){
           st.pop();
           }
        else if(s[i]=='}'&& st.top()=='{'){
           st.pop();
           }
        else if(s[i]==']'&& st.top()=='['){
            st.pop();
        }
        else if(st.empty()){
            return "NO";
        }
        else{
            return "NO";
        }

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
