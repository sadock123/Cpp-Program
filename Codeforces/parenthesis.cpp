//to check if it is balanced or inbalanced paranthesis
#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s){
    stack<char> st;
    bool ans =true;
    for (int i=0; i<s.length();i++){
        if (s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(i);
        }
        else if ( s[i]=='}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }
            else {
                ans=false;
                break;
            }
        }
        else if (s[i]==')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
            }
            else {
                ans=false;
                break;
            }
        }
        else if (s[i]==']'){
            if(!st.empty() and st.top()=='['){
                st.pop();
            }
            else {
                ans=false;
                break;
            }
        }
    }
    if (!st.empty()){
        ans=false;
    }
return ans;

}
int main(){
    string s="{([])}";
    if (isValid(s)){
        cout<<"yes";
    }
    else{
        cout << "no";
    }
    return 0;
}